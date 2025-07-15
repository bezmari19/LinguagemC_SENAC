// Faça um algoritmo que receba um número e mostre a mensagem "Sim" caso este número seja maior que 10. Se for menor ou igual, o programa deve encerrar sem exibir mais nada

#include <stdio.h>

int main()
{
    int numero; // Declaração da variável para armazenar o número
    printf("Escolha um número:\n"); // Solicita ao usuário que insira um número
    scanf("%d", &numero); // Lê o número digitado pelo usuário
    
    if (numero > 10) { // Verifica se o número é maior que 10
        printf("Sim"); // Exibe "Sim" se a condição for verdadeira
    } else if (numero <= 10) { // Verifica se o número é menor ou igual a 10
        // Não faz nada, o programa encerra sem exibir mais nada
    }
 
    return 0;
}