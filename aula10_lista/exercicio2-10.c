// 2 - Crie um programa que recebe números inteiros até que o usuário digite 0 e então exiba o maior e o menor.

#include <stdio.h>

int main() {
    int numero; // Variável para armazenar o número digitado pelo usuário
    int maior = 0; // Variável para armazenar o maior número
    int menor = 0; // Variável para armazenar o menor número

    while(numero != 0) { // Loop até que o usuário digite 0
        printf("Escolha um número inteiro:\n"); // Solicita ao usuário que digite um número
        scanf("%d", &numero); // Lê o número digitado pelo usuário
    
        if(maior == 0 || numero > maior) { // Se for o primeiro número ou se o número atual for maior que o maior encontrado
            maior = numero;
        }
        if(menor == 0 || numero < menor) { // Se for o primeiro número ou se o número atual for menor que o menor encontrado
            menor = numero; // Atualiza o menor número
        } 
    }
    printf("Você digitou 0.\n"); // Informa que o usuário digitou 0 para encerrar o loop
    printf("O maior número digitado foi: %d\n", maior); // Exibe o maior número encontrado
    printf("O menor número digitado foi: %d\n", menor); // Exibe o menor número encontrado
    printf("Fim do programa.\n"); // Informa que o programa terminou
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
