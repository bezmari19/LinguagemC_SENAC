// 6 - Sorteie dois números de 1 a 10. Informe quantos destes números estão entre 3 e 7 (inclusive).

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca para funções de utilidade geral (rand, srand)
#include <time.h>   // Inclui a biblioteca para funções relacionadas ao tempo

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios com o tempo atual como semente
    int aleatorio1, aleatorio2; // Declara duas variáveis inteiras para armazenar os números sorteados
    aleatorio1 = rand() % 10 + 1; // Gera o primeiro número aleatório entre 1 e 10
    aleatorio2 = rand() % 10 + 1; // Gera o segundo número aleatório entre 1 e 10
    printf("%d e %d\n", aleatorio1, aleatorio2); // mostra por motivos de teste e pode ser retirado na versão final
    int quantidade = 0; // Declara uma variável para contar quantos números estão entre 3 e 7

    if (aleatorio1 >= 3 && aleatorio1 <= 7 || aleatorio2 >= 3 && aleatorio2 <= 7) {
        quantidade++; // Incrementa a quantidade se o primeiro ou o segundo número estiver entre 3 e 7
        printf("A quantidade de números sorteados entre 3 e 7 é: %d\n", quantidade); // Exibe a quantidade de números no intervalo
    } else if (aleatorio1 >= 3 && aleatorio1 <= 7 && aleatorio2 >= 3 && aleatorio2 <= 7) {
        quantidade += 2; // Incrementa a quantidade se ambos os números estiverem entre 3 e 7
        printf("A quantidade de números sorteados entre 3 e 7 é: %d\n", quantidade); // Exibe a quantidade de números no intervalo
    } else {
        printf("Nenhum número sorteado está entre 3 e 7.\n"); // Mensagem se nenhum número estiver no intervalo
    }

    return 0; // Retorna 0 para indicar que o programa executou com sucesso

}