#include <stdio.h>

int main() {

 int torre, bispo, rainha, t = 1, b = 1, c = 1;

    //Movimentação da Torre
    while (t <= 5){
        printf ("Torre: Direita\n");
        t++;
    }
    printf ("\n");

    //Movimentação do Bispo
    do {
        printf ("Bispo: Cima, Direita\n");
        b++;
    } while (b <= 5);
    printf ("\n");

    //Movimentação da Rainha
    for (int i = 1; i <= 8; i++){
        printf ("Rainha: Esquerda\n");
    }
    printf ("\n");

    //Movimentação do Cavalo
    
    while (c <= 5){
        printf ("Cavalo: ");
        for (int j = 1; j <= 2; j++){
            printf ("Baixo, ");
        }
        printf ("Esquerda\n");
        c++;
    }
    printf ("\n");

    return 0;
}
