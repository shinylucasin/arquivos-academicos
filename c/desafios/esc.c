#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>
// Fechar o programa com a tecla Esc.

void keyboard (unsigned char key, int x, int y) { // É chamado toda vez que uma tecla no teclado é pressionada.
    if (key == 27){ // Verifica se a tecla Esc (Número 27 no código ASCII) é pressionada ou não.
        exit(0); // Caso seja, fecha o programa.
    }
    else {
        printf("Tecla inválida! Para fechar o programa, pressione a tecla Esc.");
        // Caso não seja, mostra uma mensagem.
    }
}

int main(int argc, char **argv) { // Parte principal do código.
    glutInit (&argc, argv); // Utilizado para iniciar o Glut.
    glutCreateWindow ("Eventos do teclado"); // Cria uma janela com um título.
    glutKeyboardFunc (keyboard); // Registra a função "keyboard" como um callback de eventos do teclado.
    glutMainLoop(); // Uma função da biblioteca Glut que inicia o loop principal de eventos.
    // O código para de executar sequencialmente e entra em um loop infinito, onde o Glut sempre aguardará por eventos.

    return 0; // Encerra a função main.
}