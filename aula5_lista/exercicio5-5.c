// 5 - Incremente o exercício anterior, para o caso das medidas formarem um triângulo válido, informar qual o tipo de triângulo que eles formam: equilátero, isósceles ou escaleno.

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
    } else if (ladoA == ladoB && ladoB == ladoC) { // Verifica se todos os lados são iguais
        printf("O triângulo acima é equilátero.\n"); // Exibe mensagem se o triângulo é equilátero 
    } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) { // Verifica se dois lados são iguais
        printf("O triângulo acima é isósceles.\n"); // Exibe mensagem se o triângulo é isósceles
    } else if (ladoA != ladoB && ladoA != ladoC && ladoB != ladoC) { // Verifica se todos os lados são diferentes
        printf("O triângulo acima é escaleno.\n"); // Exibe mensagem se o triângulo é escaleno
    }
    else {
        printf("Os valores não podem formar um triângulo.\n"); // Exibe mensagem se os valores não podem formar um triângulo
    }
    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}