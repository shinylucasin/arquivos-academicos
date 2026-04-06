#include <stdio.h>
#include <conio.h>

int main () {
	int *x, valor, y;
	valor = 35;
	x = &valor; // Atribui o end de valor ao ptr x
	y = *x; // Atribui o conteudo da variavel apontada por x a y
	
	printf("Endereco variavel valor: %p \n", &valor);
	printf("Conteudo da variavel valor: %d \n", valor);
	printf("Conteudo ponteiro x: %p \n", x);
	printf("Endereco da variavel ponteiro x: %p \n", &x);
	printf("Conteudo da variavel apontada por x: %d \n", *x);
	printf("Conteudo da variavel y: %d \n", y);
}
