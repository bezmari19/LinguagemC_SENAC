// Desafio Jedi Master Advanced 7 - Elabore um programa que solicita um número e então diz se este número é primo.

#include <stdio.h>

int main() {

    int numero; // Variável para armazenar o número informado pelo usuário
    printf("Digite um número: "); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número informado pelo usuário
    int i, primos = 1; // Variável para controle de número primo, inicia como verdadeiro (1)

    if (numero < 2) { // Números menores que 2 não são primos
        printf("O número %d não é primo.\n", numero); // Exibe mensagem se o número não é primo
    } else { // Se o número é 2 ou maior, verifica se é primo
        for (i = 2; i < numero; i++) { // Loop para verificar se o número é divisível por algum número entre 2 e o próprio número - 1
            if (numero % i == 0) { // Se o número é divisível por i, não é primo
                primos = 0; // Marca como não primo
                break; // Interrompe o loop, pois já sabemos que não é primo
            }
        }
        if (primos) { // Se primos ainda é 1, o número é primo
            printf("O numero %d é primo.\n", numero); // Exibe mensagem se o número é primo
        } else { // Se primos foi marcado como 0, o número não é primo
            printf("O numero %d não é primo.\n", numero); // Exibe mensagem se o número não é primo
        }
    }
    printf("Fim do programa.\n"); // Exibe mensagem de fim do programa
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}

