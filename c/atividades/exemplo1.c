#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    fprintf(arquivo, "Nome: Lucas\n");
    fprintf(arquivo, "Idade: %d\n", 18);

    fclose(arquivo);
    printf("Dados gravados em dados.txt\n");
    return 0;
}