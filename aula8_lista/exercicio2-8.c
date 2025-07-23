// 2 - Escreva um programa que exibe o quadrado de todos os números de 1 a 20.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() { 
    for (int i = 1; i <= 20; i++) { // Loop de 1 a 20
        int quadrado = i * i; // Calcula o quadrado do número
        printf("O quadrado de %d é: %d\n", i, quadrado); // Exibe o resultado
    }
    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}