#include <stdio.h>

int main() {

    // Definindo o número de casas para cada peça
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // Torre
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Bispo
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita):\n");
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

    return 0;
}
