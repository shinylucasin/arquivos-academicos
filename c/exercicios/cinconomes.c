#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50], nome2[50], nome3[50], nome4[50], nome5[50]; // Variáveis para armazenar nomes

    // Abre o arquivo "nomes.txt" em modo de escrita ("w").
    arquivo = fopen("nomes.txt", "w"); 

    // Verifica se houve erro na abertura do arquivo
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    // Escreve os dados no arquivo
    fprintf(arquivo, "Primeiro nome: Lucas\n");
    fprintf(arquivo, "Segundo nome: Maria\n");
    fprintf(arquivo, "Terceiro nome: Marcos\n");
    fprintf(arquivo, "Quarto nome: Eduarda\n");
    fprintf(arquivo, "Quinto nome: Gabriel\n");

    // Fecha o arquivo após a escrita
    fclose(arquivo);

    // Reabre o arquivo em modo de leitura ("r")
    arquivo = fopen("nomes.txt", "r");

    // Lê cada nome do arquivo e armazena nas variáveis
    fscanf(arquivo, "Primeiro nome: %s\n", nome);
    fscanf(arquivo, "Segundo nome: %s\n", nome2);
    fscanf(arquivo, "Terceiro nome: %s\n", nome3);
    fscanf(arquivo, "Quarto nome: %s\n", nome4);
    fscanf(arquivo, "Quinto nome: %s\n", nome5);

     // Imprime os nomes lidos na tela
    printf("Primeiro nome: %s\n", nome);
    printf("Segundo nome: %s\n", nome2);
    printf("Terceiro nome: %s\n", nome3);
    printf("Quarto nome: %s\n", nome4);
    printf("Quinto nome: %s\n", nome5);

    // Fecha o arquivo após a leitura
    fclose(arquivo);
    return 0;
}