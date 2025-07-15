// Escrever um algoritmo que leia dois valores inteiro distintos e informe qual deles é o maior.

#include <stdio.h>

int main() {
    int numero1; // Declaração da variável para o primeiro número
    int numero2; // Declaração da variável para o segundo número

    printf("Escolha o primeiro número:\n"); // Solicita o primeiro número
    scanf("%d", &numero1); // Lê o primeiro número
    printf("Escolha o segundo número:\n"); //
    scanf("%d", &numero2); // Lê o segundo número

    if (numero1 > numero2) { // Verifica se o primeiro número é maior que o segundo
        printf("O maior número é: %d\n", numero1); // Exibe o maior número
    } else if (numero2 > numero1) { // Verifica se o segundo número é maior que o primeiro
        printf("O maior número é: %d\n", numero2); // Exibe o maior número
    }

    return 0; // Indica que o programa foi executado com sucesso
}
