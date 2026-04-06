#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("aluno.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(arquivo, "Nome: Lucas\n");
    fprintf(arquivo, "Idade: %d\n", 18);
    fprintf(arquivo, "Nota: %.2f\n", 7.5);

    fclose(arquivo);
    return 0;
}