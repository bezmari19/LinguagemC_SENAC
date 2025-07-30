// 5 - Dado um número digitado pelo usuário, exiba o fatorial deste número.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero; // Declaração da variável para armazenar o número digitado pelo usuário
    printf("Digite um número inteiro e positivo:\n"); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número digitado e armazena na variável 'numero'

    for(int i = numero - 1; i > 0; i--) { // Calcula o fatorial: número! = número * (número - 1)!
        numero *= i; // Multiplica o número pelo próximo menor até chegar a 1
        printf("Fatorial parcial: %d\n", numero); // Exibe o fatorial parcial
        
    }
    printf("O fatorial é: %d\n", numero); // Exibe o fatorial final
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}