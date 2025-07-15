// Solicite que o usuário digite um número. Informe então se este número é par ou ímpar.

#include <stdio.h>

int main() {
    int numero; // Declaração da variável para armazenar o número
    printf("Escolha um número:\n"); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número digitado pelo usuário

    if (numero % 2 == 0) { // Verifica se o número é par
        printf("O número %d é par.\n", numero); // Exibe que o número é par
    } else { // Caso contrário, o número é ímpar
        printf("O número %d é ímpar.\n", numero); // Exibe que o número é ímpar
    }
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}