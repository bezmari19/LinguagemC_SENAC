// 2b - Faça um aprimoramento do programa anterior. Desta vez, seu programa deverá dar dicas, dizendo se o numero sorteado é maior ou menor, e permitir um novo palpite do usuário, ATÉ ELE ACERTAR. Mostrar quantas tentativas foram efetuadas (ele não irá sortear o número novamente).

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de funções utilitárias
#include <time.h> // Inclui a biblioteca de manipulação de tempo para gerar números aleatórios

int main() {

    srand(time(NULL)); // Inicializa o gerador de números aleatórios com base no tempo atual
    int numeroEscolhido; // Variável para armazenar o número escolhido pelo usuário
    int numeroSorteado; // Variável para armazenar o número sorteado aleatoriamente
    int tentativas = 0;

    printf("Escolha um número entre 1 e 10:\n"); // Solicita ao usuário que escolha um número entre 1 e 10
    scanf("%d", &numeroEscolhido); // Lê o número escolhido pelo usuário

    for(int i = 1; i <= 10; i++) { // Loop para permitir várias tentativas
        numeroSorteado = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
        if (numeroEscolhido == numeroSorteado) { // Verifica se o número escolhido é igual ao sorteado
            printf("Parabéns! O número que você escolheu é igual o número sorteado.\n"); // Informa que o usuário acertou
            printf("Você acertou em %d tentativas.\n", tentativas + 1); // Informa o número de tentativas
            break; // Encerra o loop se o usuário acertou
        } else if(numeroEscolhido < numeroSorteado) { // Verifica se o número escolhido é menor que o sorteado
            printf("O número que você escolheu é menor que o número sorteado.\n"); // Informa que o número é menor
            tentativas++; // Incrementa o contador de tentativas
            printf("Tente novamente! Você já tentou %d vezes.\n", tentativas); // Informa o número de tentativas
            printf("Escolha um número entre 1 e 10:\n"); // Solicita novamente um número ao usuário
            scanf("%d", &numeroEscolhido); // Lê o novo número escolhido pelo usuário
        } else {
            printf("O número que você escolheu é maior que o número sorteado.\n"); //
            tentativas++; // Informa que o número é maior
            printf("Tente novamente! Você já tentou %d vezes.\n", tentativas); // Informa o número de tentativas
            printf("Escolha um número entre 1 e 10:\n"); // Solicita novamente um número ao usuário
            scanf("%d", &numeroEscolhido); // Lê o novo número escolhido pelo usuário
        }
    }
    printf("Fim do jogo!\n"); // Informa que o jogo terminou
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}