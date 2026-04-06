#include <GL/glut.h> // A biblioteca para janelas e eventos.
#include <stdio.h>
#include <time.h>
#include <math.h>
#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768

void drawCircle(float cx, float cy, float r, int num_segments);

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Limpa o buffer de cor da tela.
    // Aqui vai o código que realmente desenha algo, como o nosso círculo.
    drawCircle(WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2, 50, 100); // Desenha um círculo verde no centro da tela.
    glFlush(); // Finaliza os comandos de desenho e os envia.
}

void drawCircle(float cx, float cy, float r, int num_segments) { 
    // cx, cy = Coordenadas do centro do círculo.
    // r = O raio do círculo.
    // num_segments = A quantidade de segmentos que o círculo terá. Quanto maior esse número, mais suave e redonda a forma será.

    glBegin(GL_TRIANGLE_FAN); // Começa a desenhar triângulos
    glColor3f(0.0f, 1.0, 0.0f); // // Define a cor para verde
    glVertex2f(cx, cy); // O primeiro ponto é o centro

    for (int i = 0; i <= num_segments; i++) {
        // O loop calcula os pontos da circunferência usando matemática.
        float theta = 2.0f * 3.1415926f * (float)i / (float)num_segments; // Esta linha calcula o ângulo para cada "fatia" do círculo.
        // Usamos 2.0f * 3.1415926f (que é a mesma coisa que 2?) para cobrir o círculo completo (360 graus) e dividimos pelo número de segmentos para encontrar o ângulo de cada ponto.
        
        float x = r * cosf(theta); 
        float y = r * sinf(theta);
        // Aqui usamos a matemática.
        // As funções cosf (cosseno) e sinf (seno) são usadas para encontrar as coordenadas x e y de um ponto em uma circunferência, com base no ângulo e no raio.

        glVertex2f(cx + x, cy + y); // Adiciona um ponto na borda do círculo.
    }
    glEnd(); // Termina o desenho
}

void mouseClick(int button, int state, int x, int y) {
    // A função recebe quatro informações do GLUT a cada evento de mouse:
    // int button: Qual botão do mouse foi clicado (esquerdo, direito ou do meio).
    // int state: Se o botão foi pressionado (GLUT_DOWN) ou solto (GLUT_UP).
    // int x e int y: As coordenadas x e y do ponteiro do mouse na janela no momento do clique.

    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) { // Esta é uma condição. Ela verifica se duas coisas são verdadeiras ao mesmo tempo:
    // Se o botão que gerou o evento foi o botão esquerdo do mouse. (button == GLUT_LEFT_BUTTON)
    //  Se o estado do botão foi de "pressionado". (state == GLUT_DOWN)
    // A condição completa só será verdadeira se você clicar com o botão esquerdo e ele estiver indo para baixo. 
    // Se você soltar o botão ou clicar com o botão direito, o código dentro do if não será executado.

    time_t t = time(NULL); // Se a condição for verdadeira (ou seja, se você clicou com o botão esquerdo), o programa entra neste bloco.
    // (Retorna o tempo atual do sistema em um tempo "bruto").
    struct tm *tm = localtime(&t); // Converte o tempo bruto para uma maneira mais organizada e é armazenado no ponteiro tm (struct tm).

    printf("Clique do mouse em: %s", asctime(tm)); // Mostra a informação para o console.
    // A função asctime formata a estrutura do tempo tm em uma string legível. (Rever "data.c")
    }
}

void keyboard(unsigned char key, int x, int y) { // Essa função é chamada pelo GLUT toda vez que uma tecla é pressionada no teclado. 
    // O caractere da tecla que foi pressionada. Por exemplo, se você pressionar a tecla a, o valor de key será a.
    // As coordenadas do ponteiro do mouse (int x, int y) no momento em que a tecla foi pressionada. 
    // No nosso caso, não precisamos dessas informações, mas o GLUT as fornece de qualquer maneira.

    if (key == 27) { // Verifica se a tecla pressionada (key) tem um valor numérico de 27.
        // Lembrete: O núimero 27 em código ASCII corresponde à tecla ESC.
        // Se qualquer outra tecla é pressionada, o comando if é ignorado.

        exit(0); // Caso a condição seja verdadeira, esta função é chamada e encerra o programa.
    }
}

int main (int argc, char** argv) {
    glutInit(&argc, argv); // Inicializa o GLUT.
    glutInitWindowSize(1024, 768); // Define o tamanho da janela em pixels.
    glutCreateWindow("Circulozinho KK"); // Cria a janela com um título.

    // REGISTRO DAS FUNÇÕES:
    glutDisplayFunc(display); // Registra a função display() para ser o callback do desenho.
    // É chamado em eventos cruciais (Janela criada, redimensionada ou quando o sistema a redesenha).
    glutMouseFunc(mouseClick); // Registra a função mouseClick() como callback de eventos do mouse.
    // Vai ser chamado quando um botão do mouse for pressionado ou solto dentro da janela.
    glutKeyboardFunc(keyboard); // Registra a função keyboard() como o callback de eventos do teclado.
    // Vai ser chamado sempre que um botão no formato de um caractere for pressionado.

    // CONFIGURAÇÃO DA FUNÇÃO 2D
    glMatrixMode(GL_PROJECTION); // Essa linha diz ao OpenGL que a próxima matriz que você vai modificar será a matriz de projeção.
    // A matriz de projeção é responsável por definir como a cena 3D (ou 2D, no nosso caso) é projetada na tela 2D.
    glLoadIdentity(); // Essa função carrega a "matriz identidade", que é uma matriz que não faz nada.
    // Ao chamá-la, você garante que qualquer configuração anterior na matriz de projeção seja apagada, para que você comece do zero.
    gluOrtho2D(0, 1024, 0, 768); // Esta é a linha mais importante para o nosso projeto. Ela configura uma projeção ortográfica 2D.
    // Os quatro argumentos (0, 1024, 0, 768) definem as coordenadas que você vai usar. 
    // (0, 1024 = Eixo X) | (768, 0 = Eixo Y).
    // O ponto 0,0 fica no canto inferior esquerdo.
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Define a cor que será usada para limpar a tela. 
    // Os quatro valores flutuantes representam a intensidade das cores RGB e a opacidade (Alpha), respectivamente.
    // Nesse caso, o resultado é a cor preta. 
    // Sendo usado pela função glClear() na função display() para pintar o fundo da janela a cada novo quadro.

    // INICIA O LOOP PRINCIPAL
    glutMainLoop(); // É uma função da biblioteca GLUT que inicia o loop principal de eventos.
    // Quando essa função é chamada, o controle do programa é entregue à biblioteca GLUT.
    // O código para de ser executado sequencialmente e entra em um ciclo infinito, onde o GLUT fica esperando por eventos.

    return 0; // Indica que a função main terminou de ser executada e que o programa retornou com sucesso.
}
