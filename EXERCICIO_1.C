#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    // Leitura dos números
    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordem em que foram digitados
    printf("\nOrdem normal:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    // Ordem inversa
    printf("\n\nOrdem inversa:\n");

    for (i = 9; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}