// Crie um programa que calcula o volume de um cilindro, solicitando que o usuário digite apenas a medida do raio e a altura do mesmo.

#include <stdio.h>
#include <math.h> // biblioteca para funções matemáticas
#include <corecrt_math_defines.h> // definições matemáticas
// M_PI é uma constante que representa o valor de pi (π)
// M_PI é utilizado para calcular o volume do cilindro

int main()
{
    double rRaio; double hAltura; // variáveis para armazenar o raio e a altura do cilindro em dupla precisão
    printf("Digite o valor do raio do cilindro:\n"); // solicita o valor do raio do cilindro
    scanf("%lf", &rRaio); // lê o valor do raio do cilindro
    printf("Digite o valor da altura do cilindro:\n"); // solicita o valor da altura do cilindro
    scanf("%lf", &hAltura); // lê o valor da altura do cilindro
    
    double raio_quadrado = pow(rRaio, 2.00); // calcula o quadrado do raio do cilindro
    // O volume do cilindro é calculado pela fórmula: V = π * r² * h
    double valor_volume = M_PI * raio_quadrado * hAltura; // calcula o volume do cilindro usando a constante M_PI para pi (π)
    
    printf("O volume do cilindro é: %.2f", valor_volume); // exibe o resultado do cálculo do volume do cilindro com duas casas decimais

    return 0;
}