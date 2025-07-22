// 3 - Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 80, menor que 25 ou igual a 40.

#include <stdio.h>

int main() {
    int numero; // Declara uma variável inteira para armazenar o número digitado pelo usuário
    printf("Escolha um número e digite abaixo:\n"); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número digitado pelo usuário e armazena na variável numero

    if (numero > 80 && numero < 25 || numero == 40) { // verifica se o número é maior que 80, menor que 25 ou igual a 40
        printf("Número inválido!\n"); // Exibe mensagem de erro se a condição for verdadeira
    } else {
        printf("Número válido!\n"); // Exibe mensagem de sucesso se a condição for falsa
    }
    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}