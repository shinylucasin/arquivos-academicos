#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    int idade;
    float nota;

    arquivo = fopen("aluno.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fscanf(arquivo, "Nome: %s\n", nome);
    fscanf(arquivo, "Idade: %d\n", &idade);
    fscanf(arquivo, "Nota: %f\n", &nota);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Nota: %.2f\n", nota);

    fclose(arquivo);
    return 0;
}