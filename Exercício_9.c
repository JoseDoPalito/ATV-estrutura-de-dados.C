#include <stdio.h>

#define TAM 10

void lerNotas(float notas[]) {
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float calcularMedia(float notas[]) {
    int i;
    float soma = 0;

    for (i = 0; i < TAM; i++) {
        soma += notas[i];
    }

    return soma / TAM;
}

int encontrarMaiorNota(float notas[]) {
    int i;
    int posicao = 0;

    for (i = 1; i < TAM; i++) {
        if (notas[i] > notas[posicao]) {
            posicao = i;
        }
    }

    return posicao;
}

int encontrarMenorNota(float notas[]) {
    int i;
    int posicao = 0;

    for (i = 1; i < TAM; i++) {
        if (notas[i] < notas[posicao]) {
            posicao = i;
        }
    }

    return posicao;
}

void imprimirRelatorio(float notas[], float media) {
    int i;
    int maior;
    int menor;

    maior = encontrarMaiorNota(notas);
    menor = encontrarMenorNota(notas);

    printf("\n===== RELATORIO =====\n");

    for (i = 0; i < TAM; i++) {
        printf("Aluno %d: %.2f\n", i + 1, notas[i]);
    }

    printf("\nMedia da turma: %.2f\n", media);

    printf("Maior nota: %.2f (Aluno %d)\n",
           notas[maior], maior + 1);

    printf("Menor nota: %.2f (Aluno %d)\n",
           notas[menor], menor + 1);
}

int main() {
    float notas[TAM];
    float media;

    lerNotas(notas);

    media = calcularMedia(notas);

    imprimirRelatorio(notas, media);

    return 0;
}