#include <iostream>
int posicao[2][5], i = 0, imp = 0, p = 0;

int main (int argc, char** argv){
	for (int naoaguento = 0; naoaguento < 2; naoaguento++){
		for (int mais = 0; mais < 5; mais++){
			posicao[naoaguento][mais] = i;
			i++;
		}
	}
	
	for (int naoaguento = 0; naoaguento < 2; naoaguento++){
		for (int mais = 0; mais < 5; mais++){
			if (posicao[naoaguento][mais] % 2 == 0){
				p++;
			}
		}
	}
	printf("\n\nA quantidade q tem de numero par nessa bosta: %d", p);
	return 0;
}
