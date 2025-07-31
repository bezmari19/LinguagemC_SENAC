// 6 - Escreva uma função que recebe as coordenadas de dois pontos (x1, y1) e (x2, y2) e retorne a distância entre eles.  Todos os números e valores de retorno devem ser do tipo float.

#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2) { // Função que calcula a distância entre dois pontos
    float dx = x2 - x1; // Diferença entre as coordenadas x
    float dy = y2 - y1; // Diferença entre as coordenadas y
    return sqrt(dx * dx + dy * dy); // Retorna a distância
}

int main() {
    float x1,x2,y1,y2; // Declaração das variáveis para as coordenadas dos pontos
    printf("Digite as coordenadas do primeiro ponto (x1, y1):\n"); // Solicita as coordenadas do primeiro ponto
    scanf("%f %f", &x1, &y1); // Lê as coordenadas do primeiro ponto
    printf("Digite as coordenadas do segundo ponto (x2, y2):\n"); // Solicita as coordenadas do segundo ponto
    scanf("%f %f", &x2, &y2); // Lê as coordenadas do segundo ponto
    printf("A distância entre os pontos é: %.1f\n", distancia(x1, y1, x2, y2)); // Chama a função e imprime a distância calculada
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}




