#include <iostream>

int main2 (int argc, char** argv) {
	int matriz[10][20], i=1;
	
	for (int a = 0; a < 10; a++){
		for (int b = 0; b < 20; b++){
			matriz[a][b] = i;
			i++;
		}
	}
	
	for (int a = 0; a < 10; a++){
		for (int b = 0; b < 20; b++){
			printf("%5d", matriz[a][b]);
	}
	printf("\n");
	}
	return 0;
}

