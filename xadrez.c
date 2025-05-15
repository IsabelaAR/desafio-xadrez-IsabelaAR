#include <stdio.h>

// Função recursiva para movimentação da Torre
void Torre(int t){
    if (t <= 0) return;  //Quando t for <= a 0, a função retorna sem fazer nada
        printf ("Torre: Direita\n");
        Torre (t - 1);
}

// Função recursiva para movimentação do Bispo
void Bispo(int b){
    if (b <= 0) return;  ////Quando b for <= a 0, a função retorna sem fazer nada

        for (int vertical = 1; vertical <= 1; vertical++){
            printf ("Bispo: Cima, ");
            
            for (int horizontal = 1; horizontal <= 1; horizontal++){
                printf ("Direita\n");
            }
        }

        Bispo (b - 1);
}

// Função recursiva para movimentação da Rainha
void Rainha(int r){
    if (r <= 0) return; //Quando r for <= a 0, a função retorna sem fazer nada
        printf ("Rainha: Esquerda\n");
        Rainha (r - 1);
}

// Função recursiva para movimentação do Cavalo
void Cavalo(int c){
    if (c <= 0) return; //Quando c for <= a 0, a função retorna sem fazer nada

        printf ("Cavalo: ");

        for (int i = 1; i <= 3; i++){
            if (i <= 2) {
                printf ("Cima, ");
                continue;
            }
            printf ("Direita\n");
        }
        Cavalo (c - 1);
}

int main() {

    //Movimentação da Torre
    Torre(5);
    printf ("\n"); 

    //Movimentação do Bispo
    Bispo(5);
    printf ("\n");

    //Movimentação da Rainha
    Rainha(8);
    printf ("\n");
   
    //Movimentação do Cavalo
    Cavalo(5);
    printf ("\n");

    return 0;
}
