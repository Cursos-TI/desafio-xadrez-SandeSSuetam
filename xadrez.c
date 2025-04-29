#include <stdio.h>

int main(){
    int i; 
    const int Mov_torre = 5;
    const int Mov_rainha = 8;
    const int Mov_Bispo = 5 ;
    //Torre anda cindo casas

    for (int  T = 0 ; T < Mov_torre ; T++)
    {
        printf("Direita \n");
    }
    // aqui e movimento da rainha (obs: de uma forma tola de repetiçao)
    for ( int r = 0; r < Mov_rainha; r++)
    {
        printf("Esquerda \n");
    }
    // Movimentação do bispo cima e pra direita 
    for (int b = 0; b < Mov_Bispo; b++)
    {
        printf("Cima \n");
        printf("Direita \n");
    }
    return 0 ;
}