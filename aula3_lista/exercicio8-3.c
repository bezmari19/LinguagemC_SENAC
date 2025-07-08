// Peça ao usuário para digitar três números float e, em seguida, calcule e exiba a média aritmética desses números.

#include <stdio.h>
#include <math.h> // Biblioteca para funções matemáticas

int main()
{
    double primeiroN; double segundoN; double terceiroN; // Declaração das variáveis para armazenar os números
    scanf("%lf", &primeiroN); // Leitura do primeiro número
    scanf("%lf", &segundoN); // Leitura do segundo número
    scanf("%lf", &terceiroN); // Leitura do terceiro número
    
    double media = (primeiroN + segundoN + terceiroN) / 3; // Cálculo da média aritmética
    
    printf("A média aritmetica do usuário é: %.1f\n", media); //
    
    return 0;
}