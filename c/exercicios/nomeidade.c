#include <stdio.h>
#include <stdlib.h>

int main () {
    
    char nome[50];
    int idade;
    FILE *textoidade; // Um ponteiro para o arquivo

    printf("Informe o seu nome: ");
    scanf("%s", nome);
    printf("Informe a sua idade: ");
    scanf("%d", &idade);

    // Abre o arquivo para escrita no modo de anexar ("a")
    // Se o arquivo 'textoidade.txt' não existir, ele será criado.
    // Se ele já existir, as novas informações serão adicionadas ao final, em vez de sobrescrever o conteúdo.
    textoidade = fopen("textoidade.txt", "a");

    // Verifica se o arquivo foi aberto.
    if (textoidade == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1; // Retorna 1 para indicar um erro
    }
    
    // Escreve o nome e a idade no arquivo, formatando o texto.
    fprintf(textoidade, "Seu nome: %s, Sua idade: %d\n", nome, idade);

    // Fecha o arquiivo.
    fclose(textoidade);
    printf("Dados gravados com sucesso. Tente abrir o arquivo!");

    return 0;
}