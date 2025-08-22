#include <stdio.h>

int main() {

   // Movimento da Torre (for)
    // ================================
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8; // número de casas

    printf("=== Movimento da Torre ===\n");
    for (int t = 1; t <= casasTorre; t++) {
        printf("Direita (%d)\n", t);  // Torre move em linha reta
    }
    printf("\n");

    // Movimento do Bispo (while)
    int b = 1;
    printf("=== Movimento do Bispo ===\n");
    while (b <= casasBispo) {
        printf("Cima, Direita (%d)\n", b);  // Bispo move na diagonal
        b++;
    }
    printf("\n");

    // Movimento da Rainha (do-while)
    int r = 1;
    printf("=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", r);  // Rainhamove em qualquer direção
        r++;
    } while (r <= casasRainha);
    printf("\n");


    return 0;
}
