#include <stdio.h>
#include <conio.h>

int main(int argc, char** argv) {
	// Valor é a variável que será apontada pelo ponteiro
	int valor = 27;
	
	// Declaração de variável ponteiro
	int *ptr;
	
	// Atribuindo o endereço da variável valor ao ponteiro
	ptr = &valor;
	
	printf("Utilizando ponteiros\n\n");
	printf("Conteudo da variavel valor: %d\n", valor);
	printf("Endereco da variavel valor: %x \n", &valor);
	printf("Endereco da variavel ponteiro ptr: %x", ptr);
	
	getch();
	return(0);
}
