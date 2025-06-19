#include <stdio.h>

int main() {
    // ===================== Movimento da TORRE =====================
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ===================== Movimento do BISPO =====================
    int casasBispo = 5;
    int j = 0;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // ===================== Movimento da RAINHA =====================
    int casasRainha = 8;
    int k = 0;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);
    printf("\n");

    // ===================== Movimento do CAVALO =====================
    // O Cavalo se move em "L": duas casas para baixo, uma para a esquerda
    int passosVerticais = 2;
    int passosHorizontais = 1;

    printf("Movimento do Cavalo (2 casas para Baixo, 1 para Esquerda):\n");

    // Loop externo com for (movimento para baixo)
    for (int i = 0; i < passosVerticais; i++) {
        printf("Baixo\n");
    }

    // Loop interno com while (movimento para a esquerda)
    int contador = 0;
    while (contador < passosHorizontais) {
        printf("Esquerda\n");
        contador++;
    }

    return 0;
}

