// 2 - Escreva uma função chamada EhPar( ), que recebe um número inteiro e retorna um valor booleano indicando se o número é par.

#include <stdio.h>
#include <stdbool.h>

bool EhPar(int numero) { // Função que verifica se o número é par
    if(numero % 2 == 0) { // Verifica se o resto da divisão por 2 é zero
        return true; // Se for, o número é par
    } else { // Caso contrário, o número é ímpar
        return false; // Retorna falso
    }
}

int main() {
    int numero;
    printf("Escolha um número e digite abaixo:\n");
    scanf("%d", &numero);
    if(EhPar(numero)) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }
    return 0;
}