//Escreva um programa que solicita 3 números de 1 a 60 ao usuário. 
// O programa então sorteará continuamente 3 números de 1 a 60 até que sejam sorteadas as 3 dezenas que foram digitadas pelo usuário (em qualquer ordem). 
// No final ele deve exibir quantos sorteios foram efetuados.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    int numeros[3]; // Array para armazenar os números escolhidos pelo usuário
    int numeroSorteado[3]; // Array para armazenar os números sorteados
    int contagemSorteios = 0; // Contador de sorteios realizados


    printf("Bem-vindo ao jogo de sorteio de números!\n"); // Mensagem de boas-vindas
    printf("Você deve escolher 3 números de 1 a 60.\n"); // Exibe instruções para o usuário

    printf("Escolha 3 números de 1 a 60:\n"); // Solicita os números ao usuário
    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]); // Lê os números escolhidos pelo usuário
    printf("Números escolhidos: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]); // Exibe os números escolhidos

    while(numeros[0] != numeroSorteado[0] || numeros[1] != numeroSorteado[1] || numeros[2] != numeroSorteado[2]) { // Continua sorteando até acertar os números
        contagemSorteios++; // Incrementa o contador de sorteios
        for(int i = 0; i < 3; i++) { // Sorteia 3 números
            numeroSorteado[i] = rand() % 60 + 1; // Gera números aleatórios entre 1 e 60
        } if(numeros[0] == numeroSorteado[0] && numeros[1] == numeroSorteado[1] && numeros[2] == numeroSorteado[2]) { //
            printf("Parabéns! Você acertou os números sorteados.\n"); // Exibe mensagem de sucesso
            printf("Números sorteados: %d, %d, %d\n", numeroSorteado[0], numeroSorteado[1], numeroSorteado[2]); // Exibe os números sorteados
            break; // Sai do loop quando os números são acertados
        }
        
    }
    printf("Total de sorteios realizados: %d\n", contagemSorteios); // Exibe o total de sorteios realizados

}
