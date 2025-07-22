// Crie um programa que desafia o usuário digitar um número maior que 40, que seja múltiplo de 5 e 7. Se ele conseguir, deve receber uma mensagem de parabéns.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    int numero_escolhido; // Declara uma variável inteira para armazenar o número digitado pelo usuário
    printf("Digite um número maior que 40, que seja múltiplo de 5 e 7:\n");
    scanf("%d", &numero_escolhido);

    if (numero_escolhido > 40 && numero_escolhido % 5 == 0 && numero_escolhido % 7 == 0) {
        printf("Parabéns! Você digitou um número múltiplo de 5 e 7.\n");
    } else {
        printf("O número digitado não é um múltiplo de 5 e 7.\n");
    }
    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}