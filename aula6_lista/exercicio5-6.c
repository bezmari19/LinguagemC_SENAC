// 5 - Sorteie dois números de 1 a 5 e peça que o usuário acerte os dois números de uma vez, não necessariamente na mesma ordem.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Biblioteca para funções de utilidade geral (rand, srand)
#include <time.h>   // Biblioteca para funções relacionadas ao tempo

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual como semente
    int numero1, numero2; // Declara duas variáveis inteiras para armazenar os números sorteados
    numero1 = rand() % 5 + 1; // Gera o primeiro número aleatório entre 1 e 5
    numero2 = rand() % 5 + 1; // Gera o segundo número aleatório entre 1 e 5
    int palpite1, palpite2; // Declara duas variáveis inteiras para armazenar os palpites do usuário

    printf("Bem-vindo ao jogo de adivinhação!\n"); // Exibe uma mensagem de boas-vindas
    printf("Tente adivinhar os dois números sorteados entre 1 e 5, não precisa ser na mesma ordem.\n"); // Instruções do jogo
    printf("Digite seu primeiro palpite:\n"); // Solicita o primeiro palpite do usuário
    scanf("%d", &palpite1); // Lê o primeiro palpite do usuário
    printf("Digite seu segundo palpite:\n"); // Solicita o segundo palpite do usuário
    scanf("%d", &palpite2); // Lê o segundo palpite do usuário

    if (numero1 == palpite1 && numero2 == palpite2 || numero1 == palpite2 && numero2 == palpite1 || numero2 == palpite1 && numero1 == palpite2) {
        // Verifica se os palpites estão corretos, independentemente da ordem
        printf("Parabéns! Você acertou os números sorteados.\n");
        printf("Os números sorteados eram: %d e %d\n", numero1, numero2);
    } else {
        // Se os palpites não estiverem corretos, exibe mensagem de erro
        printf("Você errou! Os números sorteados eram: %d e %d\n", numero1, numero2);
    }

    printf("Obrigado por jogar!\n"); // Mensagem de agradecimento ao usuário
    printf("Fim do jogo.\n"); // Indica o fim do jogo

    return 0;
}