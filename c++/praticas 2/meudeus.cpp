#include <iostream>
using namespace std;

int main (int argc, char** argv) {
	const int N = 8;
	float notas[N];
	float soma = 0;
	
	for (int i = 0; i < N; i++) {
		cout << "\nDigite a nota" << i+1 << ":";
		cin >> notas[i];
		soma = soma + notas[i];
	}
	
	float media = soma / N;
	
	for (int i = 0; i < N; i++) {
		cout << "\nNota:" << notas[i] << "\nMedia:" << media << "\nEndereco:" << &notas[i];
	}
	return 0;
}
