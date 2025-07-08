// Peça ao usuário para digitar uma temperatura em graus Celsius e, em seguida, exiba a temperatura equivalente em graus Fahrenheit.

#include <stdio.h>

int main()
{
    int grausCelsius; // Declaração da variável para armazenar a temperatura em graus Celsius
    printf("Digite quantos graus está agora na sua cidade:\n"); // Solicita ao usuário que digite a temperatura em graus Celsius
    scanf("%d", &grausCelsius); // Lê a entrada do usuário e armazena na variável grausCelsius
    
    int grauFahrenheit = (grausCelsius * 9/5) + 32; // Converte a temperatura de Celsius para Fahrenheit usando a fórmula: F = C * 9/5 + 32
    
    printf("O %d é %d em grau Fahrenheit.", grausCelsius, grauFahrenheit); // Exibe a temperatura em graus Fahrenheit correspondente à temperatura em graus Celsius digitada pelo usuário
    
    return 0;
}