// 1 - Escreva um programa solicita um numero e exibe a mensagem "SENAC" se este número for 14, 24, 23, 32 ou 33.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Declara uma variável inteira para armazenar o número digitado pelo usuário
    int numero_escolhido;
    
    // Exibe uma mensagem solicitando ao usuário que digite um número
    printf("Digite um número abaxio:\n");
    
    // Lê o número digitado pelo usuário e armazena na variável numero_escolhido
    scanf("%d", &numero_escolhido);

    // Verifica se o número digitado é um dos números válidos (14, 24, 23, 32 ou 33)
    // usando operadores de comparação (==) e operadores lógicos (||)
    if (numero_escolhido == 14 || numero_escolhido == 24 ||
        numero_escolhido == 23 || numero_escolhido == 32 || 
        numero_escolhido == 33) {
            // Se o número for válido, exibe a mensagem "SENAC"
            printf("SENAC\n");
        } else {
            // Se o número não for válido, exibe mensagem de erro
            printf("Número inválido\n");
        }

    // Retorna 0 para indicar que o programa executou com sucesso
    return 0;
}
