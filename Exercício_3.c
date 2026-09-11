#include <stdio.h>

int main() {
    int vetor[15];
    int numero;
    int i;
    int encontrado = 0;

    // Leitura do vetor
    for (i = 0; i < 15; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Número para pesquisa
    printf("\nDigite um numero para pesquisar: ");
    scanf("%d", &numero);

    // Busca
    for (i = 0; i < 15; i++) {
        if (vetor[i] == numero) {
            printf("\nNumero encontrado!\n");
            printf("Posicao no vetor: %d\n", i);
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        printf("\nNumero nao encontrado.\n");
    }

    return 0;
}