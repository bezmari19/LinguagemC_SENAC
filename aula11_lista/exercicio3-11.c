// 3 - Escreva uma função chamada Absoluto( ), que recebe um número inteiro e retorna o valor absoluto deste número. (Se recebe 3, retorna 3. Se recebe -4, retorna 4).

#include <stdio.h>

int Absoluto(int numero) { // função que recebe um número inteiro e retorna o valor absoluto
    if (numero < 0) { // verifica se o número é negativo
        return -numero; // se for negativo, retorna o valor positivo do número
    } else { // se o número for positivo ou zero
        return numero; // retorna o número como está
    }
}

int main() {
    int numero; // variável para armazenar o número digitado pelo usuário
    printf("Escolha um número e digite abaixo:\n"); // solicita ao usuário que digite um número
    scanf("%d", &numero); // lê o número digitado pelo usuário
    int resultado = Absoluto(numero); // chama a função Absoluto e armazena o resultado
    printf("O valor absoluto de %d é %d.\n", numero, resultado); // exibe o resultado para o usuário
    return 0; // retorna 0 para indicar que o programa terminou corretamente
}