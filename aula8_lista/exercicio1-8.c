// 1 - Escreva um programa que exibe qualquer tabuada completa. O programa deve perguntar ao usuário qual tabuada ele deseja visualizar, que irá responder digitando um número de 1 a 10.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {

    int numero; // Declara uma variável inteira para armazenar o número da tabuada
    printf("Vamos fazer a tabuada!\n"); // Exibe uma mensagem de boas-vindas ao usuário
    printf("Digite um número de 1 a 10 para ver sua tabuada.\n"); // Solicita ao usuário que digite um número para a tabuada
    printf("Escolha um número:\n"); // Exibe uma mensagem para o usuário digitar o número da tabuada
    scanf("%d", &numero); // Lê o número digitado pelo usuário e armazena na variável numero

    printf("Tabuada do %d:\n", numero); // Exibe o número da tabuada escolhida pelo usuário

    for(int i = 1; i <= 10; i++) { // Inicia um loop que vai de 1 a 10 para calcular a tabuada
        int resultado = numero * i; // Calcula o resultado da multiplicação do número pela variável i
        printf("%d x %d = %d\n", numero, i, resultado); // Exibe o resultado da multiplicação na forma "número x i = resultado"
    }
    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}

