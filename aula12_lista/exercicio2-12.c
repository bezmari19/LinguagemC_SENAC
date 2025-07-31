// 2 - Solicite 5 números. Exiba os que estão acima da média.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeros[5]; // Array para armazenar os números
    int soma = 0; // Variável para armazenar a soma dos números
    float media; // Variável para armazenar a média dos números

    printf("Digite 5 números:\n"); // Solicita ao usuário que digite 5 números
    for(int i = 0; i < 5; i++) { // Loop para ler os 5 números
        printf("Número %d:", i + 1); // Exibe o número do índice
        scanf("%d", &numeros[i]); // Lê o número digitado pelo usuário
        soma += numeros[i]; // Adiciona o número à soma total
    }

    media = (float)soma / 5; // Calcula a média dos números
    printf("Média: %.2f\n", media); // Exibe a média calculada

    printf("Números acima da média:\n");  // Exibe os números que estão acima da média
    for(int i = 0; i < 5; i++) { // Loop para verificar cada número
        if(numeros[i] > media) { // Se o número for maior que a média
            printf("%d ", numeros[i]); // Exibe o número que está acima da média
        }
    }
    printf("\n"); // Nova linha após exibir os números acima da média

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}