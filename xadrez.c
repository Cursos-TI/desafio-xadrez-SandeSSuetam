#include <stdio.h>

int main(){
    const int Mov_torre = 5;
    const int Mov_rainha = 8;
    const int Mov_Bispo = 5;
    int Mov_cavalo = 1;

    // Cavalo: 2 para baixo e 1 para a esquerda (movimento em L)
    printf("*** Cavalo se mexe ***\n");
    while (Mov_cavalo--) {
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
        }
    }

    // Torre: 5 casas para a direita
    printf("*** Torre agora !! *** \n");
    for (int T = 0 ; T < Mov_torre ; T++) {
        printf("Direita\n");
    }

    // Rainha: 8 casas para a esquerda
    printf("*** Rainha se move agora *** \n");
    for (int r = 0; r < Mov_rainha; r++) {
        printf("Esquerda\n");
    }

    // Bispo: 5 casas na diagonal (cima + direita)
    printf("*** Bispo se move agora *** \n");
    for (int b = 0; b < Mov_Bispo; b++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    return 0;
}
