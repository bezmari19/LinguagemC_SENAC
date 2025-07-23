// 5 - Escreva um programa que exibe a soma dos números de 1 a 100

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int soma = 0; // Inicializa a variável soma com 0
    for (int i = 1; i <= 100; i++) { // Loop de 1 a 100
        soma += i; // Adiciona o valor de i à soma
    }
    printf("A soma dos números de 1 a 100 é: %d\n", soma); // Exibe a soma total dos números de 1 a 100
    return 0; // Indica que o programa foi executado com sucesso
}