// Crie um programa que recebe dois números inteiros. Exiba a mensagem "sim" apenas caso ambos sejam maiores que 10.

#include <stdio.h>

int main() {
    
    int numero1, numero2; // Declaração das variáveis para armazenar os números inteiros
    printf("Escolha o primeiro número:\n"); // Solicita o primeiro número ao usuário
    scanf("%d", &numero1); // Lê o primeiro número digitado pelo usuário
    printf("Escolha o segundo número:\n"); // Solicita o segundo número ao usuário
    scanf("%d", &numero2); // Lê o segundo número digitado pelo usuário

    if (numero1 > 10 && numero2 >10) { // Verifica se ambos os números são maiores que 10
        printf("sim"); // Exibe "sim" se a condição for verdadeira
    } else { // Caso contrário, não faz nada
        // Não há saída se a condição não for atendida
    }

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}