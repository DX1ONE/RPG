#!/usr/bin/env bash
# Compila o MAGUS 2 para WebAssembly e monta a pasta dist/ com tudo que a
# página web (index.html) precisa: magus.js / magus.wasm (o jogo) e as
# bibliotecas de terminal (xterm.js + addon-fit), buscadas via npm.
#
# Requer emscripten (emcc) instalado — ex.: `apt-get install emscripten`.
set -euo pipefail

cd "$(dirname "$0")"
DIST=dist
mkdir -p "$DIST"

# --- jogo (C -> WebAssembly) ---------------------------------------------
#
# ASYNCIFY é necessário para que scanf/getchar consigam pausar a execução
# em C enquanto esperam o jogador digitar algo no navegador (ver stdin no
# index.html). O import fd_read precisa estar em ASYNCIFY_IMPORTS porque
# não é uma das funções assíncronas padrão do emscripten. setvbuf(stdin,
# NULL, _IONBF, 0) em main.c (guardado por __EMSCRIPTEN__) é obrigatório:
# sem stdin sem buffer, a libc tenta ler várias vezes por chamada e
# quebra o mecanismo de pausa/retomada do Asyncify.
emcc ../*.c -O3 \
  -s ASYNCIFY=1 \
  -s ASYNCIFY_STACK_SIZE=131072 \
  -s "ASYNCIFY_IMPORTS=['wasi_snapshot_preview1.fd_read']" \
  -s EXIT_RUNTIME=1 \
  -s MODULARIZE=1 \
  -s EXPORT_NAME=MagusModule \
  -s ENVIRONMENT=web \
  -s ALLOW_MEMORY_GROWTH=1 \
  -s "EXPORTED_RUNTIME_METHODS=['Asyncify','TTY']" \
  -o "$DIST/magus.js"

# --- terminal (xterm.js + addon-fit, via npm) -----------------------------
npm install --no-save --prefix . @xterm/xterm @xterm/addon-fit >/dev/null
cp node_modules/@xterm/xterm/lib/xterm.js "$DIST/xterm.js"
# O build minificado do xterm.js embute bytes ESC (0x1B) crus em algumas
# strings; troca por "\x1b" em texto (equivalente dentro de uma string JS)
# para o arquivo continuar sendo texto puro.
python3 -c "
data = open('$DIST/xterm.js', 'rb').read()
open('$DIST/xterm.js', 'wb').write(data.replace(b'\x1b', b'\\\\x1b'))
"
cp node_modules/@xterm/xterm/css/xterm.css "$DIST/xterm.css"
cp node_modules/@xterm/addon-fit/lib/addon-fit.js "$DIST/xterm-addon-fit.js"

cp index.html "$DIST/index.html"

echo "Pronto: $DIST/ (sirva com qualquer servidor HTTP estático)"
