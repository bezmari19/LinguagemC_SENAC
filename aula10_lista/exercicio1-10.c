// 1 - Crie um programa que recebe 5 números inteiros e exiba o menor.

#include <stdio.h>

int main() {
    int numeros = 5; // Número de inteiros a serem lidos
    int menor; // Variável para armazenar o menor número

    for(int i = 0; i < numeros; i++) { // Loop para ler os números
        int numero_inteiro; // Variável para armazenar o número atual
        printf("Digite um número inteiro:\n"); // Solicita ao usuário que digite um número
        scanf("%d", &numero_inteiro); // Lê o número digitado pelo usuário
        if (i == 0 || numero_inteiro < menor) { // Se for o primeiro número ou menor que o atual menor
            menor = numero_inteiro; // Atualiza o menor número
        }
    }
    printf("O menor número digitado foi: %d\n", menor); // Exibe o menor número encontrado
    printf("Fim do programa.\n"); // Mensagem de fim de programa
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}