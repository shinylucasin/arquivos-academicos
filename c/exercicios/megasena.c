#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, " ");
    
    int num_sorteado[6]; // Array para guardar os 6 números sorteados.
    int i, j, numero;
    int repetido; // Variável para verificar se o número já saiu.

    // Inicializa a semente com o tempo atual para garantir números diferentes a cada execução.
    srand(time(NULL));

    // Loop principal para sortear os 6 números.
    for (i = 0; i < 6; i++) {
        do {
            // Sorteia um número entre 1 e 60.
            numero = (rand() % 60) + 1;

            // Verifica se o número sorteado já está no array.
            repetido = 0; // Assume que o número não é repetido.
            for (j = 0; j < i; j++) {
                if (num_sorteado[j] == numero) {
                    repetido = 1; // Marca como número repetido.
                    break; // Sai do loop de verificação.
                }
            }
        } while (repetido); // Repete o 'do-while' se o número for repetido.

        // Adiciona o número único (não repetido) ao array.
        num_sorteado[i] = numero;
    }
    
    // Imprime os números sorteados.
    printf("Os números sorteados da Mega-Sena são:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", num_sorteado[i]);
    }
    printf("\n");
    
    return 0;
}