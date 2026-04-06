// A linha mágica para o FreeGLUT funcionar estaticamente
#define FREEGLUT_STATIC

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <locale.h>
#include <GL/glut.h> // Biblioteca principal do OpenGL/GLUT

// --- Variáveis Globais para o Gráfico ---
// Os dados do sensor precisam ser globais para a função de desenho (display) acessar.
char SENSOR_NOME[50];
float SENSOR_VALOR = 0.0;

// --- Funções do OpenGL ---

// Função para desenhar texto na tela do gráfico
void desenhaTexto(float x, float y, char *texto) {
    glRasterPos2f(x, y); // Posição onde o texto vai começar
    for (int i = 0; texto[i] != '\0'; i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, texto[i]);
    }
}

// Função principal de desenho (é chamada sempre que a tela precisa ser redesenhada)
void display(void) {
    // Limpa a tela com a cor de fundo definida
    glClear(GL_COLOR_BUFFER_BIT);

    // Define a cor da barra (Azul)
    glColor3f(0.2f, 0.5f, 1.0f);

    // A altura da barra será proporcional ao valor do sensor.
    // Nossa "área de desenho" vai de 0 a 100 no eixo Y.
    float alturaBarra = SENSOR_VALOR;
    if (alturaBarra > 100.0) { // Limita a altura em 100 para não sair da tela
        alturaBarra = 100.0;
    }
    
    // Desenha a barra como um retângulo
    glRectf(40.0, 0.0, 60.0, alturaBarra);

    // Prepara o texto para ser exibido na janela gráfica
    char textoValor[100];
    sprintf(textoValor, "Sensor: %s | Valor: %.1f", SENSOR_NOME, SENSOR_VALOR);

    // Define a cor do texto (Branco)
    glColor3f(1.0f, 1.0f, 1.0f);
    desenhaTexto(5.0, 90.0, textoValor);

    // Executa os comandos de desenho
    glFlush();
}

// Função de inicialização das configurações do OpenGL
void init(void) {
    // Define a cor de fundo da janela (preto)
    glClearColor(0.0, 0.0, 0.0, 1.0);
    
    // Define o sistema de coordenadas 2D (como um papel quadriculado de 100x100)
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 100.0, 0.0, 100.0);
}

// --- Função Principal do Programa ---
int main(int argc, char** argv) {
    // Define a localização para o padrão do sistema (permite acentos, formatação de números, etc.)
    setlocale(LC_ALL, "");

    // 1. PARTE DE CONSOLE
    printf("Qual o nome do sensor? \n"); 
    scanf("%s", SENSOR_NOME); 
    printf("Qual o valor atual? \n");
    scanf("%f", &SENSOR_VALOR);

    // ... (A parte de gravar em arquivo pode ser adicionada aqui se você quiser) ...
    printf("\nDados recebidos! Iniciando janela grafica...\n");

    // 2. PARTE GRÁFICA (inicialização do GLUT)
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Grafico do Sensor");

    init(); // Chama nossa função de inicialização gráfica
    
    glutDisplayFunc(display); // Registra a função 'display' para desenhar na tela
    
    // A linha que mantém a janela aberta e funcionando
    glutMainLoop();

    return 0; 
}