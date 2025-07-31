// 1 - Crie um vetor de inteiro de 10 posições. Insira o número 5 em todas as posições.

#include <stdio.h>

int main() {
    int lista[10]; // Declara um vetor de inteiros com 10 posições
    for(int i = 0; i < 10; i++) {
        lista[i] = 5; // Atribui o valor 5 a cada posição do vetor
        printf("Aqui está a sua lista: %d\n", lista[i]);
    }
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}