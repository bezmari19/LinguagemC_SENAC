// 1 - Sorteie um número de 1 a 100, exiba na tela e informe se é um número par ou ímpar.

#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdlib.h> // Inclui a biblioteca padrão de funções
#include <time.h> // Inclui a biblioteca para manipulação de tempo

int main() {
    srand(time(NULL)); // Inicializa o gerardor de numeros aleatórios com base no tempo atual
    int numero_sorteado = rand() % 100 + 1; // Sorteia um número de 1 a 100
    printf("O número sorteado é: %d\n", numero_sorteado); // Exibe ao usuário o número sorteado

    if (numero_sorteado % 2 == 0) { // verifica se o número sorteado é par
        printf("O número que você sorteou é par.\n");
    } else { // caso não seja a condição anterior, então é impar}
        printf("O número que você sorteou é ímpar.\n");
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}