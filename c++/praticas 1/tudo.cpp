#include <iostream>

int main (int argc, char** argv) {
	int valores[6];
	
	for (int ab = 0; ab < 6; ab++){
		printf("\nInforme os 6 valores inteiros: ");
		scanf("%d", &valores[ab]);
	}
	
	for (int ab = 0; ab < 6; ab++){
		printf("%3d", valores[ab]);
	}
	return 0;
}
