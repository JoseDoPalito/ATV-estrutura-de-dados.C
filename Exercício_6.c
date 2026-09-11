#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    int i;
    int vogais = 0;
    int consoantes = 0;
    int espacos = 0;
    int quantidade;

    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    // Remove o ENTER do fgets
    nome[strcspn(nome, "\n")] = '\0';

    quantidade = strlen(nome);

    for (i = 0; nome[i] != '\0'; i++) {

        if (nome[i] == ' ') {
            espacos++;
        }

        else if (tolower(nome[i]) == 'a' ||
                 tolower(nome[i]) == 'e' ||
                 tolower(nome[i]) == 'i' ||
                 tolower(nome[i]) == 'o' ||
                 tolower(nome[i]) == 'u') {
            vogais++;
        }

        else if (isalpha(nome[i])) {
            consoantes++;
        }
    }

    printf("\nQuantidade de caracteres: %d\n", quantidade);
    printf("Quantidade de vogais: %d\n", vogais);
    printf("Quantidade de consoantes: %d\n", consoantes);
    printf("Quantidade de espacos: %d\n", espacos);

    return 0;
}