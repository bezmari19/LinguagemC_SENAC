// 1 - Escreva uma função chamada MAX( ) que recebe dois números inteiros e retorna o maior deles.

#include <stdio.h>

// Função que retorna o maior entre dois números inteiros
int MAX(int a, int b) { // define a função MAX que recebe dois inteiros
    if (a > b) { // verifica se o primeiro número é maior que o segundo
        return a; // retorna o primeiro número se for maior
    } else { // caso contrário
        return b; // retorna o segundo número
    }
}

int main() {
    int numeroUm, numeroDois; // declara variáveis para armazenar os dois números inteiros
    printf("Escolha dois números e digite-os abaixo:\n"); // solicita ao usuário que escolha dois números
    scanf("%d %d", &numeroUm, &numeroDois); // lê os dois números digitados pelo usuário

    int numeroMaior = MAX(numeroUm, numeroDois); // chama a função MAX para determinar o maior número
    printf("O maior número é o: %d\n", numeroMaior); // exibe o maior número encontrado
    return 0; // finaliza o programa
}