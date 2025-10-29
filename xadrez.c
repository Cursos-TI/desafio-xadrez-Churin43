#include <stdio.h>

int main() {
    
    // Definindo o número de casas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    //Torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Bispo
    printf("\nMovimento do Bispo (5 casas na diagonal):\n");
    int passoBispo = 1;
    while (passoBispo <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", passoBispo);
        passoBispo++;
    }

    //Rainha
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int passoRainha = 1;
    do {
        printf("Casa %d: Esquerda\n", passoRainha);
        passoRainha++;
    } while (passoRainha <= casasRainha);
    
    // Movimento do cavalo em L: 2 casas para baixo + 1 casa para a esquerda
    const int movimentosCavalo = 3;
    printf("\nMovimento do Cavalo (em L - 2 para baixo e 1 para a esquerda):\n");

    for (int l = 1; l <= movimentosCavalo; l++) { 
        printf("\nMovimento L #%d:\n", l);

       
        int casasBaixo = 1;
        while (casasBaixo <= 2) {
            printf("Casa %d: Baixo\n", casasBaixo + (l-1)*3); 
            casasBaixo++;
        }

        // Uma casa para a esquerda após descer
        printf("Casa %d: Esquerda\n", 3*l);
    }

    return 0;
}
