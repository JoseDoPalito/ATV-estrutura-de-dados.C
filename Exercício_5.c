#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int maior;
    int linha, coluna;

    // Leitura da matriz
    printf("Digite os valores da matriz 5x5:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Considera o primeiro elemento como maior
    maior = matriz[0][0];
    linha = 0;
    coluna = 0;

    // Procura o maior
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i;
                coluna = j;
            }
        }
    }

    printf("\nMaior elemento: %d\n", maior);
    printf("Linha: %d\n", linha);
    printf("Coluna: %d\n", coluna);

    return 0;
}