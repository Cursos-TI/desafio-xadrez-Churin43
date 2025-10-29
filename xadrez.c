#include <stdio.h>

// Torre
void moverTorre(int casasRestantes, int casaAtual) {
    if (casasRestantes == 0) return; 
    printf("Casa %d: Direita\n", casaAtual);
    moverTorre(casasRestantes - 1, casaAtual + 1); 
}

// Bispo
void moverBispo(int casasVerticais, int casasHorizontais, int casaV, int casaH) {
    if (casasVerticais == 0) return; 
    for (int h = 1; h <= casasHorizontais; h++) {
        printf("Casa V%d H%d: Cima, Direita\n", casaV, casaH + h - 1);
    }
    moverBispo(casasVerticais - 1, casasHorizontais, casaV + 1, casaH); 
}

// Rainha
void moverRainha(int casasRestantes, int casaAtual) {
    if (casasRestantes == 0) return; 
    printf("Casa %d: Esquerda\n", casaAtual);
    moverRainha(casasRestantes - 1, casaAtual + 1); 
}

int main() {

    const int casasTorre = 5;
    const int casasBispoV = 5; // movimento verticalbispo
    const int casasBispoH = 5; // movimento horizontal bispo
    const int casasRainha = 8;
    const int movimentosCavalo = 3; // número de movimentos Cavalo


    // Movimento da Torre
  
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre, 1);

    // Movimento do Bispo

    printf("\nMovimento do Bispo (diagonal superior direita):\n");
    moverBispo(casasBispoV, casasBispoH, 1, 1);


    // Movimento da Rainha

    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha, 1);


    // Movimento do Cavalo

    printf("\nMovimento do Cavalo (em L - 2 para cima e 1 para a direita):\n");

    int movimento = 1;
    int passo;
    for (int l = 1; l <= movimentosCavalo; l++) { 
        printf("\nMovimento L #%d:\n", l);

        passo = 1;
        while (passo <= 2) { 
            printf("Casa %d: Cima\n", movimento);
            movimento++;
            passo++;
        }


        printf("Casa %d: Direita\n", movimento);
        movimento++;
    }

    return 0;
}
