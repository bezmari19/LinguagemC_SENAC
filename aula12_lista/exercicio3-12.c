// 3 - Crie um vetor de 100 posições, preencha com números aleatórios de 1 a 100. Exiba a média destes.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    int lista[100]; // Vetor de 100 posições
    int soma = 0; // Variável para armazenar a soma dos números
    float media; // Variável para armazenar a média dos números

    for(int i = 0; i < 100; i++) {
        lista[i] = rand() % 100 + 1; // Preenche o vetor com números aleatórios de 1 a 100
        soma += lista[i]; // Soma os números
    }

    media = (float)soma / 100; // Calcula a média dos números
    printf("Média: %.2f\n", media); // Exibe a média calculada

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}