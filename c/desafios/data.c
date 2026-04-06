#include <stdio.h> // Para a fun??o printf
#include <time.h> // Para as fun??es de tempo
#include <locale.h> // Inclui a biblioteca de localiza??o
// Vale lembrar que se utiliza o & para indicar o endere?o da vari?vel

int main() {
    setlocale(LC_ALL,"");

    time_t data; // Declara uma variável (pega o tempo bruto)
    time(&data); // Pega o tempo e armazena na variável (Tempo atual do sistema operacional)

    struct tm *data_atual; // Declara um ponteiro para a estrutura
    data_atual = localtime(&data); // Converte o tempo "bruto" para a estrutura tm (ajustando para o fuso horário da máquina)

    char buffer[80]; // Cria um buffer de 80 caracteres para armazenar a string formatada

    strftime(buffer, 80, "%A, %d/%m/%Y, %H:%M:%S", data_atual); 

    // A função strftime formata a data da estrutura 'data_atual' em uma string.
    // Depois, ela usa o modelo "%A, %d/%m/%Y, ..." e armazena o resultado no 'buffer'.

    printf("Data, hora e dia da semana atuais: %s\n", buffer);

    return 0;
}

// Lembrete: Especificadores para a fun??o strftime
// %A = Dia da semana (terça-feira)
// %d = Dia do mês (02)
// %m = Número do mês (09)
// %Y = Número do ano em quatro digitos (2025)
// %H = Horas em 24h (19)
// %M = Minutos (44)
// %S = Segundos (20)