# MAGUS 2

RPG narrativo solo em terminal, em português. Dois personagens correm por um
cajado mágico lendário — você escolhe um deles e enfrenta a jornada em 3
níveis de dificuldade, com finais diferentes dependendo das suas escolhas.

Esta é a versão evoluída do jogo original (veja `../magus1`), reorganizada em
múltiplos arquivos e com a história completa: os dois personagens
protagonistas do design original e as duas rotas (sair / ficar) de cada um.

## A história

> Era uma vez um mago chamado Zauber, criado na floresta desde pequeno,
> conectado espiritualmente a ela. Com o passar dos anos, ele encontrou uma
> jovem elfa chamada Quelle. Os dois formaram uma grande amizade — até
> descobrirem a existência de um cajado mágico muito poderoso escondido na
> região. Brigaram por ele, e agora estão em uma corrida para ver quem chega
> primeiro ao Cajado MAGUS.

Você escolhe **quem** joga essa corrida:

- **Zauber** — o mago: Sábio, Paciente, Vagaroso. Acorda em sua torre e
  decide se sai imediatamente rumo à Floresta/Deserto, ou se fica mais um
  pouco (e encontra uma corda encantada, que pode levar ou deixar para trás).
- **Quelle** — a elfa: Rápida, Esperta, Impaciente. Acorda em sua cabana e
  decide se sai de casa rumo às Montanhas/Lago, ou se fica (e encontra a
  Capa Sibilus, que pode pegar ou largar).

Cada decisão de "sair" ou "ficar", combinada com o item encontrado (levar ou
largar), leva a uma sequência diferente de obstáculos, NPCs e finais — vitória
(encontrar o Cajado MAGUS antes do rival) ou derrota (Fim de Jogo), com um
placar entre até 5 jogadores locais ao final de cada partida.

## Como jogar

```
make        # compila (clang, ou troque CC=gcc no Makefile)
./main
```

No menu principal, digite seu nome, escolha **Novo Jogo**, escolha o
**personagem** (Zauber ou Quelle) e a **dificuldade** (Básico / Médio /
Avançado). A partir daí é só ler o texto e responder as perguntas com o
número indicado entre parênteses.

### Jogar no navegador (celular incluso)

O jogo também roda direto no navegador — compilado para WebAssembly, com um
terminal (xterm.js) fazendo o papel do console. Dá pra abrir num link só,
sem instalar nada, então é o jeito de jogar no celular ou mandar pra alguém
testar pelo WhatsApp.

Pasta `web/`: `web/index.html` é a página, `web/build.sh` compila o jogo
para `web/dist/` (precisa de [emscripten](https://emscripten.org/) instalado
— `apt-get install emscripten` — e de rede pra baixar o xterm.js via npm).

```
cd web
./build.sh
python3 -m http.server -d dist 8080   # ou qualquer servidor estático
```

## Estrutura do código

| Arquivo | Conteúdo |
|---|---|
| `main.c` | Menu principal: nome do jogador, introdução, seleção de personagem e de dificuldade. |
| `magus.h` | `struct player_t` e protótipos compartilhados. |
| `ui.c` | Tela (`limpar_tela`), banner (`mostrar_logo_magus`) e placar (`mostrar_placar`). |
| `nivel_basico.c` / `nivel_medio.c` / `nivel_avancado.c` | A jornada do **Zauber** (Sair da Torre e Ficar na Torre) em cada dificuldade. |
| `nivel_basico_quelle.c` / `nivel_medio_quelle.c` / `nivel_avancado_quelle.c` | A jornada da **Quelle** (Sair de Casa e Ficar em Casa) em cada dificuldade. |

Cada dupla personagem+dificuldade é uma única função (`jogar_nivel_<nível>[_quelle]`),
chamada pelo `main.c` de acordo com as duas escolhas do menu.

## O que mudou em relação ao MAGUS 1

O MAGUS 1 (pasta `../magus1`) era um único arquivo de ~12.700 linhas,
inteiramente dentro de um `main()`, com boilerplate (banner, placar) repetido
manualmente em centenas de pontos, e só a metade do design original
implementada — a elfa Quelle nunca chegou a ser jogável, embora a introdução
e o mural de planejamento do jogo já a citassem como o par do Zauber nessa
corrida.

Nesta versão:

- **Código dividido em módulos** (`ui.c`, `magus.h`, um arquivo por
  personagem/dificuldade) em vez de um único arquivo monolítico; as funções
  de tela/banner/placar, antes coladas em cada final de história, viraram
  3 funções reutilizadas.
- **Quelle é jogável**, com sua própria árvore de história completa (Sair de
  Casa / Ficar, Montanhas / Lago, a Capa Sibilus) nos 3 níveis de
  dificuldade — reconstruída a partir do mural de planejamento original do
  jogo, no mesmo tom e formato do que já existia para o Zauber.
- **Tela de seleção de personagem** no menu principal.
- **Build sem warnings**: trocado de `-Wno-everything` para `-Wall -Wextra`
  e validado com clang e gcc; zero warnings nos dois.
- **Bugs corrigidos**:
  - Estouro de buffer na leitura do nome do jogador (sem limite de
    tamanho no `scanf`).
  - No nível Avançado, acertar a charada final do santuário em 2 dos 3
    pontos da árvore do Zauber levava à tela de **derrota** em vez de
    vitória (bloco de "acertou"/"errou" trocado por copy-paste).
  - Dois `switch` sem `break` faziam o jogo cair (fallthrough) no caso
    seguinte por engano.
  - `srand()` deixou de ser chamado várias vezes ao longo do jogo
    (re-semeava o gerador de números aleatórios); agora é chamado uma
    única vez, no início do `main()`.
  - **20 cenas em laço infinito**: um `break` dentro de `switch` só sai do
    `switch`, não do `while(1)` em volta — sem um segundo `break` depois
    do `switch`, a cena voltava a perguntar a mesma coisa para sempre,
    mesmo depois de mostrar o final da escolha. Acontecia no encontro com
    o urso, no Golem de areia e em outras cenas, nos 3 níveis. O resto do
    código já usava o `break` extra; faltava nesses 20 pontos.
  - **Placar embaralhava os jogadores**: `mostrar_placar()` ordenava o
    vetor real, mas quem está jogando é identificado pelo índice — depois
    de um placar, esse índice passava a apontar para outra ficha, e as
    vitórias/derrotas/pontos seguintes iam para o jogador errado (dava
    para ver com "Novo Jogador"). Agora ordena uma cópia.

Os dois últimos foram encontrados com uma varredura estrutural dos fontes
(laços sem saída, `case` sem `break`, variável lida no `scanf` diferente da
testada no `switch`, atribuição dentro de condição); hoje essa varredura
não acusa mais nada.

### Dificuldade

Até então os três níveis eram cópias quase idênticas do mesmo roteiro —
mudavam o banner e um limiar de dado, e todos davam por volta de 27% a
30% de vitória. Agora cada um tem uma forma própria:

| Nível | Zauber | Quelle |
|---|---:|---:|
| Básico | 22 de 44 finais levam ao cajado (**50%**) | 18 de 37 (**49%**) |
| Médio | 12 de 44 (27%) | 11 de 37 (30%) |
| Avançado | **1 caminho só** | **1 caminho só** |

No Básico, metade dos desfechos chega ao cajado: quase toda encrenca tem
uma saída, e quem escapa por pouco segue viagem. No Médio fica a proporção
original. No Avançado existe um único caminho até o cajado, com 7
escolhas certas em sequência — errar não mata na hora: você percorre a
jornada inteira e descobre no fim que o rival chegou primeiro.

Nenhuma vitória sai com menos de **6 escolhas**. Os caminhos que
terminavam antes disso (a vitória da Quelle pelo bote, por exemplo)
passam pela reta final em `ui.c`, um último trecho antes do cajado. Ele
também muda com a dificuldade: no Básico as duas saídas seguem em frente,
no Médio e no Avançado a escolha errada encerra a corrida.

### Vários jogadores no mesmo aparelho

A tabela guarda até 5 jogadores. "Novo Jogador" cadastra mais um (sempre
na próxima vaga livre) e, a partir do segundo, o menu ganha a opção
**Escolher Jogador**: ela lista quem já está cadastrado, com vitórias,
derrotas e pontos, marcando quem está jogando no momento. É assim que
duas pessoas revezando alternam entre si depois de cada partida — antes,
ao trocar de jogador não havia como voltar ao anterior.

### Introdução

A história de fundo (como Zauber e Quelle chegaram a essa corrida) é
contada uma vez por jogador, na primeira partida dele. Quem já terminou
uma partida — ou seja, já tem vitória ou derrota na tabela — vai direto
para a escolha de personagem ao começar um novo jogo. Um jogador novo,
criado em "Novo Jogador", ouve a história normalmente.

### Fim de partida

Todo desfecho (vitória ou derrota) termina em três momentos, no lugar de
despejar tudo junto e voltar sozinho ao menu depois de um tempo fixo:

1. a tela do desfecho fica no ar o tempo de ser lida;
2. o placar entra sozinho na tela;
3. o jogo só volta ao início quando o jogador mandar — qualquer tecla (ou
   um toque na tela, no celular); no terminal, ENTER.

Isso vale para os 267 finais de história de uma vez porque todos passam
por `mostrar_placar()`, que hoje cuida dos três momentos. Três desfechos
ainda tinham o placar copiado inline (sobra do arquivo único) e ficavam
de fora — agora também chamam a função.
