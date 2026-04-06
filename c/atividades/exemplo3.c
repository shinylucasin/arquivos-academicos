#include <stdio.h>

int main() {
    FILE *arquivo;
    arquivo = fopen("dados.txt", "a");
    if (arquivo == NULL) return 1;

    fprintf(arquivo, "Curso: Ciência da Computação\n");

    fclose(arquivo);
     return 0;
}