#include <stdio.h>

/// ------------------------- Função Recursiva para Torre -------------------------
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

/// ------------------------- Função Recursiva para Bispo -------------------------
void moverBispo(int casas) {
    if (casas <= 0) return;

    // Loop aninhado adicional (conforme requisito)
    for (int i = 0; i < 1; i++) { // Loop vertical (fixo)
        for (int j = 0; j < 1; j++) { // Loop horizontal (fixo)
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1);
}

/// ------------------------- Função Recursiva para Rainha -------------------------
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/// ------------------------- Movimento Complexo do Cavalo -------------------------
void moverCavaloL() {
    const int movimentosVerticais = 2;
    const int movimentosHorizontais = 1;

    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");

    // Loop externo: movimento vertical (cima)
    for (int i = 0; i < 3; i++) {
        if (i >= movimentosVerticais) break;
        if (i == 1) continue; // Simula pulo intermediário do cavalo (opcional)
        printf("Cima\n");

        // Loop interno: movimento horizontal (direita)
        for (int j = 0; j < 2; j++) {
            if (j == movimentosHorizontais) {
                printf("Direita\n");
                break;
            }
        }
    }
}

/// ------------------------- Função Principal -------------------------
int main() {
    // ===================== Movimento da TORRE =====================
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    // ===================== Movimento do BISPO =====================
    int casasBispo = 5;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(casasBispo);
    printf("\n");

    // ===================== Movimento da RAINHA =====================
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // ===================== Movimento do CAVALO =====================
    moverCavaloL();

    return 0;
}
