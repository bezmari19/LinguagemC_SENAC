// 4 - Escreva um programa que sorteia 10 números pares entre 1 e 100 e exibe na tela. (como garantir que o sorteio exiba apenas números pares?)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    int numeros[10]; // Array para armazenar os números pares únicos

    // Gera 10 números pares únicos
    for(int i = 0; i < 10; i++) { // Loop para preencher o array
        int numero = rand() % 50 * 2; // Gera um número par entre 0 e 98
        numeros[i] = numero; // Armazena o número gerado no array
    }

    // Exibe os números gerados
    printf("Números pares gerados:\n"); //
    for(int i = 0; i < 10; i++) { // Loop para imprimir os números
        printf("%d ", numeros[i]); // Imprime o número atual
    }
    printf("\n"); // Nova linha após a lista de números

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}