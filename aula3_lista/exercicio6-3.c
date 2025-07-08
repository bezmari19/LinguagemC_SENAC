// Escreva um programa que solicita um número e então exibe 0 se o número for par, e 1 se o número for ímpar. (Não utilize o comando IF ainda).

#include <stdio.h>

int main()
{
    int numero; // Declaração da variável para armazenar o número
    printf("Digite o número que você escolheu:\n"); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número digitado pelo usuário e armazena na variável 'numero'
    
    int parOUimpar = numero % 2; // Calcula o resto da divisão do número por 2 para determinar se é par ou ímpar
    
    printf("%d", parOUimpar); // Exibe 0 se o número for par, e 1 se for ímpar
    
    return 0;
}