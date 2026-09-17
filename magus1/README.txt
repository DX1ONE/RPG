# MINI RPG By.Diogo Freitas — MAGUS 1 (versão original)

~ O jogo será basicamente um mini RPG Solo em que o jogador terá algumas opções e de acordo com as escolhas, terá diferentes caminhos e diferentes finais.

I.O jogo contará com 1 personagem protagonista como escolha para o jogador.

II.O jogo contará com 3 Níveis de Dificuldade.

III.O jogo contará com "Chefões" que dificultam a jornada.

IV.O jogo será baseado em diálogos e um escolha dentre 2 opções disponíveis.

V.Para jogar:
    i.Abra o console e compile o código digitando: 'make' (ou 'gcc magus.c -o magus -lm')

    ii.Execute o jogo: ./magus

VI.Obrigado por Jogar e Divirta-se!!

------------------------------------------------------------------------------------------- MAGUS® -------------------------------------------------------------------------------------------

NOTA DE MANUTENÇÃO: esta pasta preserva o código original do MAGUS
praticamente intacto (arquivo único magus.c, sem a divisão em módulos).
A única alteração em relação ao código entregue originalmente é uma
correção de estouro de buffer na leitura do nome do jogador
(scanf("%[^\n]s", ...) sem limite de tamanho podia sobrescrever memória
além do vetor de 21 caracteres se o jogador digitasse um nome muito
longo). Nenhum outro bug, texto ou comportamento foi alterado aqui —
para a versão revisada, expandida e com a Quelle jogável, veja a pasta
../magus2.
