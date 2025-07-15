// Crie um programa que recebe um número inteiro e informa se este número é múltiplo de 10.

#include <stdio.h>

int main() {

    int numero; // Declaração da variável para armazenar o número
    printf("Escolha um número:\n"); // Solicita ao usuário que escolha um número
    scanf("%d", &numero); // Lê o número escolhido pelo usuário

    if (numero % 10 == 0) { // Verifica se o número é múltiplo de 10
        printf("O número que você escolheu é um múltiplo de 10"); // Exibe mensagem se for múltiplo de 10
    } else { // Caso contrário
        printf("O número que você escolheu não é um múltiplo de 10"); // Exibe mensagem se não for múltiplo de 10
    } 

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}