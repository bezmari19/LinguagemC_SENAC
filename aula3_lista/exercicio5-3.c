// Fazer um algoritmo para ler os valores dos coeficientes A, B e C de uma equação quadrática. Calcular e imprimir o valor do discriminante (delta). Delta = B²– 4AC.

#include <stdio.h>
#include <math.h> // biblioteca para funções matemáticas

int main()
{
    int A; int B; int C; // variáveis para armazenar os coeficientes A, B e C da equação quadrática
    printf("Digite o valor de A:\n"); // solicita o valor do coeficiente A
    scanf("%d", &A); // lê o valor do coeficiente A
    printf("Digite o valor de B:\n"); // solicita o valor do coeficiente B
    scanf("%d", &B); // lê o valor do coeficiente B
    printf("Digite o valor de C:\n"); // solicita o valor do coeficiente C
    scanf("%d", &C); // lê o valor do coeficiente C

    int delta = pow(B, 2) - 4*A*C; // calcula o valor do discriminante (delta) usando a fórmula: delta = B² - 4AC
    
    printf("O calculo do valor de delta é igual a %d", delta); // exibe o resultado do cálculo do discriminante (delta)
    
    return 0;
}