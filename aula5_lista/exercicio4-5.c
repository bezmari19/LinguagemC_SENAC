// 4 - Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser as medidas dos lados de um triângulo.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int ladoA, ladoB, ladoC; // Declara três variáveis inteiras para armazenar os lados do triângulo

    printf("Digite o valor do lado A:\n"); // Solicita ao usuário que digite o valor do lado A
    scanf("%d", &ladoA); // Lê o valor do lado A e armazena na variável ladoA
    printf("Digite o valor do lado B:\n"); // Solicita ao usuário que digite o valor do lado B
    scanf("%d", &ladoB); // Lê o valor do lado B e armazena na variável ladoB
    printf("Digite o valor do lado C:\n"); // Solicita ao usuário que digite o valor do lado C
    scanf("%d", &ladoC); // Lê o valor do lado C e armazena na variável ladoC

    if (ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoB + ladoC > ladoA) { // Verifica se a soma de dois lados é maior que o terceiro
        printf("Os valores podem formar um triângulo.\n"); // Exibe mensagem se os valores podem formar um triângulo
    } else {
        printf("Os valores não podem formar um triângulo.\n"); // Exibe mensagem se os valores não podem formar um triângulo
    }
    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}