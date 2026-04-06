#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int idade;

    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fscanf(arquivo, "Nome: %s\n", nome);
    fscanf(arquivo, "Idade: %d\n", &idade);

    printf("Nome: %s\nIdade: %d\n", nome, idade);

    fclose(arquivo);
    return 0;
}