#include <stdio.h>

// Função Recursiva - Torre
void moverTorre(int pos, int limite) {
    if (pos > limite) return;
    printf("Direita (%d)\n", pos);
    moverTorre(pos + 1, limite);
}

// Função Recursiva - Rainha
void moverRainha(int pos, int limite) {
    if (pos > limite) return;
    printf("Esquerda (%d)\n", pos);
    moverRainha(pos + 1, limite);
}
// Função Recursiva + Loops Aninhados - Bispo
void moverBispo(int pos, int limite) {
    if (pos > limite) return; 

    // loop aninhado: movimento vertical e horizontal
    for (int v = 1; v <= 1; v++) { 
        for (int h = 1; h <= 1; h++) {  
            printf("Cima, Direita (%d)\n", pos);
        }
    }
    moverBispo(pos + 1, limite);
}

// Função com loops complexos - Cavalo
void moverCavalo(int casasCima, int casasDireita) {
    printf("=== Movimento do Cavalo ===\n");

    for (int v = 1; v <= casasCima; v++) {
        if (v == 2) { 
            printf("Cima (%d)\n", v);
            
            int h = 1;
            while (h <= casasDireita) {
                if (h == 1) {
                    printf("Direita (%d)\n", h);
                    break; 
                }
                h++;
            }
        } else {
            printf("Cima (%d)\n", v);
            continue;
        }
    }
    printf("\n");
}

// Função principal
int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int casasCavaloCima = 2;
    const int casasCavaloDireita = 1;

    printf("=== Movimento da Torre ===\n");
    moverTorre(1, casasTorre);
    printf("\n");

    printf("=== Movimento do Bispo ===\n");
    moverBispo(1, casasBispo);
    printf("\n");

    printf("=== Movimento da Rainha ===\n");
    moverRainha(1, casasRainha);
    printf("\n");

    moverCavalo(casasCavaloCima, casasCavaloDireita);

    return 0;
}