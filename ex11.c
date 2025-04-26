#include <stdio.h>

int main(void) {

int obj;
int acao;

printf("Em meio às estrelas da galáxia de Andradon, existe um planeta chamado Chyrnax — uma terra árida, dominada por civilizações extraterrestres hostis conhecidas como Zhartans. Você, um explorador humano da Federação Terrana, foi capturado durante uma missão de reconhecimento e levado para as planícies desertas de Chyrnax. Agora, sozinho e cercado, você terá que tomar decisões rápidas para tentar sobreviver... ou perecer. O horizonte é vermelho-sangue. O ar vibra com a energia das máquinas alienígenas. Atrás de você, o som metálico das patrulhas se aproxima. Em frente a você, dois objetos repousam no chão, reluzindo sob o céu púrpura: um sabre de luz pulsando em azul e um fuzil alienígena enorme e imponente.\n\nInício do jogo.\n\n");

printf("Escolha 1 - Qual objeto você pega? (digite o número)\n\n 1. O sabre de luz\n 2. O fuzil extraterreste\n\n");

scanf("%d", &obj);

printf("\n");

if (obj==1) {
    printf("O sabre vibra com poder quando sua mão o segura. Você sente uma conexão instantânea, como se o próprio sabre guiasse seus movimentos. Mas você ainda precisa agir rápido, os patrulheiros extraterrestes estão cada vez mais próximos.\n\nDiante de você, dois caminhos surgem:\n\n");

    printf("Escolha 2 - O que fazer?\n\n1. Correr para um abrigo à vista, uma caverna escura nas montanhas\n\n2. Duelar contra os Zhartans que se aproximam\n\n");

    scanf("%d", &acao);

    printf("\n");

    if (acao==2) {
            printf("Você ergue o sabre de luz. Seu coração bate como um tambor. Os Zhartans disparam contra você, mas com habilidade quase sobre-humana, você bloqueia os tiros e avança com precisão. Após uma batalha épica, você derrota o grupo de patrulheiros. Entre os destroços, você encontra um artefato de teleporte usado pelos Zhartans para viagens intergalácticas. Com um lampejo de luz azul, você ativa o dispositivo — e acorda em segurança no centro de comando da Terra.\n\nPARABÉNS, VOCÊ VENCEU!\n");

            return 0;
   }
    else {
        if (acao==1) {
        printf("Você dispara em direção à caverna. A areia queima sob seus pés. Mas os guardas conhecem Chyrnax melhor do que qualquer forasteiro; emboscam você no meio do caminho.\n\nVocê é capturado.\n\nVOCÊ PERDEU.\n");
        return 1;

        }
        else {
            printf("Erro! Insira um valor válido.\n");

            return 1;
        }


}
}
else if (obj==2) {
printf("O fuzil emite um pulso estranho quando você o segura. Antes que você possa entender seu funcionamento, ele libera uma explosão instável que te atinge em cheio.\n\nVOCÊ PERDEU.\n");
    return 1;
}
else {
printf("Erro! Insira um valor válido.\n");

return 1;
}



return 0;

}
