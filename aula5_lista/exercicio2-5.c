// 2 - Escreva um programa que solicita um número inteiro. Exiba uma mensagem de erro se o número informado estiver entre 15 e 25 ou entre 45 e 50 (inclusive).

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numero_inteiro; // Declara uma variável inteira para armazenar o número digitado pelo usuário
    printf("Digite um número inteiro abaixo:\n"); // Exibe uma mensagem solicitando ao usuário que digite um número inteiro
    scanf("%d", &numero_inteiro); // Lê o número digitado pelo usuário e armazena na variável numero_inteiro

    if (numero_inteiro >=15 && numero_inteiro <= 25) { // Verifica se o número está entre 15 e 25 (inclusive)
        printf("Número inválido! Tente novamente.\n"); // Exibe mensagem de erro se o número estiver entre 15 e 25
    } else if (numero_inteiro >= 45 && numero_inteiro <= 50) { // Verifica se o número está entre 45 e 50 (inclusive)
        printf("Número inválido! Tente novamente.\n"); // Exibe mensagem de erro se o número estiver entre 45 e 50
    } else {
        printf("Número válido!\n"); // Exibe mensagem de sucesso se o número não estiver nos intervalos especificados
    }

return 0; // Retorna 0 para indicar que o programa executou com sucesso

}