#include <stdio.h>

int main() {
    int contador_primo = 0; // Conta os números primos encontrados
    int numero = 2; // Começa do 2 (primeiro número primo)
    int x_primo = 0; // Guarda o resultado final

    while (contador_primo < 100) { // Loop infinito que só para quando o 100º número primo é achado
        int eh_primo = 1; // É primo (1 = verdadeiro)

        // Verifica se o número é divisível por mais outro
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                eh_primo = 0; // Não é primo (0 = falso)
                break; // Encerra o loop
            }
        }

        // Se ele não é divisível por nenhum outro número (e continua sendo primo)
        if (eh_primo == 1) {
            contador_primo++; // Aumenta a contagem
            x_primo = numero; // Guarda o número
        }

        numero++; // Passa para o próximo número (2, 3, 4, 5...)
    }

    printf("O 100º número primo é: %d\n", x_primo);
    return 0;
}