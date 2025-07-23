// 4 - Escreva um programa que solicita 10 números e ao final exibe a soma de todos eles.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numero; // Declara uma variável inteira para armazenar o número digitado
    int soma = 0; // Inicializa a variável soma com zero

    for(int i = 0; i < 10; i++) { // Loop que itera 10 vezes
        printf("Digite um número:\n"); // Solicita ao usuário que digite um número
        scanf("%d", &numero); // Lê o número digitado pelo usuário
        soma += numero; // Adiciona o número digitado à soma total
    }
    printf("A soma dos números digitados é: %d\n", soma); // Exibe a soma total dos números digitados
    printf("Obrigado por participar!\n"); // Mensagem de agradecimento ao usuário
    return 0; // Indica que o programa foi executado com sucesso
}