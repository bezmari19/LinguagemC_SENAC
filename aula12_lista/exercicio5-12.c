// 5 - Escreva o conteúdo do vetor do exercício anterior na tela, colocando cada valor ao lado do anterior (na mesma linha). Se o valor do vetor for múltiplo de 10, então insira uma quebra de linha.
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

    int soma_menores = 0; // Variável para armazenar a soma dos números menores que a média
    for(int i = 90; i < 100; i++) { // Loop para verificar os 10 últimos números
        if(lista[i] < media) { // Se o número for menor que a média
            soma_menores += lista[i]; // Adiciona à soma dos menores
        }
    }
    printf("Soma dos números menores que a média dos últimos 10: %d\n", soma_menores);

    // Exibe o conteúdo do vetor
    printf("Conteúdo do vetor:\n");
    for(int i = 0; i < 100; i++) {
        printf("%d ", lista[i]);
        if(lista[i] % 10 == 0) {
            printf("\n");
        }
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}