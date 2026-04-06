#include <iostream>

int main(int argc, char** argv){
	int notas[15], media = 0, soma = 0;
	
	for (int socorro = 0; socorro < 15; socorro++){
		printf("\nInsira as nota de geral: ");
		scanf("%d", &notas[socorro]);
		soma = soma + notas[socorro];
	}
	
	media = soma/15;
	printf("\n\nA media é: %d\n", media);
	return 0;
}

