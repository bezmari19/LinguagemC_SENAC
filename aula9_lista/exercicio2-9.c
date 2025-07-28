// 2a - (já pode ter sido feito anteriormente) Adivinhe o número - Crie um programa que solicita um número ao usuário entre 1 e 10, sorteia um outro número dentro desta faixa de valores, e então diz se os dois números são iguais.
 
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de funções utilitárias
#include <time.h> // Inclui a biblioteca de manipulação de tempo para gerar números aleatórios

int main() {

    srand(time(NULL)); // Inicializa o gerador de números aleatórios com base no tempo atual
    int numeroEscolhido; // Variável para armazenar o número escolhido pelo usuário
    int numeroSorteado; // Variável para armazenar o número sorteado aleatoriamente

    printf("Escolha um número entre 1 e 10:\n"); // Solicita ao usuário que escolha um número entre 1 e 10
    scanf("%d", &numeroEscolhido); // Lê o número escolhido pelo usuário

    for(int i = 1; i <= 10; i++) { // Loop para permitir várias tentativas
        numeroSorteado = rand() % 10 + 1; // Gera um número aleatório entre 1 e 10
        printf("O número sorteado foi: %d\n", numeroSorteado); // Exibe o número sorteado
        if (numeroEscolhido == numeroSorteado) { // Verifica se o número escolhido é igual ao sorteado
            printf("Parabéns! O número que você escolheu é igual o número sorteado.\n"); // Informa que o usuário acertou
            break; // Encerra o loop se o usuário acertou
        } else { // Caso contrário, informa que o número é diferente
            printf("O número que você escolheu é diferente do número sorteado.\n");
            printf("Tente novamente!\n"); // Solicita ao usuário que tente novamente
            printf("Escolha um número entre 1 e 10:\n"); // Solicita novamente um número ao usuário
            scanf("%d", &numeroEscolhido); // Lê o novo número escolhido pelo usuário
        }
    }
    printf("Fim do jogo!\n"); // Informa que o jogo terminou
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso

}