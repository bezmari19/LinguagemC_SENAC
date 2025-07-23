// 6 - Escreva um programa que solicita um número ao usuário, e então exibe todos os seus divisores. Ex: Se informado 12, deve exibir: 12 6 4 3 2 1

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numero_escolhido; // Declara uma variável inteira para armazenar o número digitado pelo usuário
    printf("Digite o número que você deseja verificar os divisores:\n"); // Exibe uma mensagem solicitando ao usuário que digite um número
    scanf("%d", &numero_escolhido); // Lê o número digitado pelo usuário e armazena na variável numero_escolhido

    for(int i = numero_escolhido; i >= 1; i--) { // Inicia um loop que vai de numero_escolhido até 1
        if(numero_escolhido % i == 0) { // Verifica se o número escolhido é divisível por i
            printf("%d ", i); // Se for divisível, exibe o divisor
        } 
    }
    printf("\nFim do programa.\n"); // Exibe mensagem de fim do programa
    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}