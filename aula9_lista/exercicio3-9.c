// 3 - Criar um algoritmo que imprima a soma dos números pares entre 25 e 200.

#include <stdio.h>

int main() {
    int soma = 0; // Variável para armazenar a soma dos números pares
    for(int i = 25; i <= 200; i++) { // Loop de 25 a 200
        soma += i; // Adiciona o número atual à soma
    }
    printf("A soma dos números entre 25 e 200 é: %d\n", soma); // Imprime a soma total
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}