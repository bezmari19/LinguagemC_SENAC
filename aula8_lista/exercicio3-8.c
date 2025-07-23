// 3 - Escreva um programa que solicita 5 números ao usuário, e para cada número digitado, informa se este é par ou ímpar.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int num1, num2, num3, num4, num5; // Declaração de variáveis para armazenar os 5 números
    printf("Escolha 5 números abaixo:\n"); // Mensagem para o usuário escolher os números
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5); // Leitura dos 5 números

    for(int i = 1; i <= 5; i++) { // Loop para iterar sobre os 5 números
        int numero; // Variável para armazenar o número atual a ser verificado
        if(i == 1) { // Primeiro número
            numero = num1; // Atribuição do primeiro número
        } else if(i == 2) { // Segundo número
            numero = num2; // Atribuição do segundo número
        } else if(i == 3) { // Terceiro número
            numero = num3; // Atribuição do terceiro número
        } else if(i == 4) { // Quarto número
            numero = num4; // Atribuição do quarto número
        } else { // Quinto número
            numero = num5; // Atribuição do quinto número
        }
        if (numero % 2 == 0) { // Verifica se o número é par
            printf("O número %d é par.\n", numero); // Exibe mensagem se o número for par
        } else { // Se não for par, então é ímpar
            printf("O número %d é ímpar.\n", numero); // Exibe mensagem se o número for ímpar
        }
    }

    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}

