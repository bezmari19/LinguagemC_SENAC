// Desafio Jedi Master 7 - Escreva um programa que joga par ou ímpar com o usuário. Ele deve começar perguntando se o usuário escolhe 1 - Par ou 2 - Ímpar. (A escolha é informada digitando 1 ou 2).

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca para funções de utilidade geral (rand, srand)
#include <time.h>   // Inclui a biblioteca para funções relacionadas ao tempo

int main() {

    srand(time(NULL));
    int numero_usuario;
    int numero_sorteado;
    // Gera um número aleatório entre 1 e 2 (1 para Par, 2 para Ímpar)
    numero_sorteado = rand() % 2 + 1; // rand() % 2 retorna 0 ou 1, +1 para obter 1 ou 2

    printf("Bem-vindo ao jogo do Par Ou ímpar!\n"); // Exibe uma mensagem de boas-vindas
    printf("Escolha 1 para Par ou 2 para Ímpar.\n"); // Instruções para o usuário
    printf("Digite o número que você escolheu:\n"); // Solicita ao usuário que digite sua escolha
    scanf("%d", &numero_usuario); // Lê o número digitado pelo usuário e armazena na variável numero_usuario
    printf("Esse foi o número que você escolheu: %d\n", numero_usuario); // Exibe o número escolhido pelo usuário

    if (numero_sorteado == numero_usuario) { // Verifica se o número sorteado é igual ao número escolhido pelo usuário
        printf("Você ganhou!\n"); // Se o número sorteado for igual ao número escolhido, o usuário ganha
    } else { // Se o número sorteado for diferente do número escolhido
        printf("Você perdeu!\n"); // O usuário perde
    }

    return 0; // Retorna 0 para indicar que o programa executou com sucesso
}