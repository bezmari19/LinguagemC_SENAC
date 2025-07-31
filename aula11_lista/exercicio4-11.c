// 4 - Escreva uma função chamada EhPrimo( ), que recebe um número inteiro e retorna um valor booleano indicando se o número é primo.

#include <stdio.h>
#include <stdbool.h>

bool EhPrimo(int numero) {
    if (numero <= 1) { // Números menores ou iguais a 1 não são primos
        return false; // Retorna falso
    }
    
    for (int i = 2; i * i <= numero; i++) { // Verifica divisores até a raiz quadrada do número
        if (numero % i == 0) { // Se o número é divisível por i
            return false; // Não é primo
        }
    }
    
    return true; // Se não encontrou divisores, é primo
} 

int main() {
    int numero; // Declara variável para armazenar o número a ser verificado
    printf("Digite um número inteiro:\n"); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número digitado pelo usuário

    if (EhPrimo(numero)) { // Chama a função EhPrimo para verificar se o número é primo
        printf("%d é um número primo.\n", numero); // Exibe mensagem se for primo
    } else {
        printf("%d não é um número primo.\n", numero); // Exibe mensagem se não for primo
    }
    
    return 0; // Finaliza o programa
}