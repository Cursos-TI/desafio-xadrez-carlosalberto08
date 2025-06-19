#include <stdio.h>

int main() {
    // Simulação do movimento da TORRE (usando FOR)
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do BISPO (usando WHILE)
    int casasBispo = 5;
    int i = 0;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }
    printf("\n");

    // Simulação do movimento da RAINHA (usando DO-WHILE)
    int casasRainha = 8;
    i = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    return 0;
}
