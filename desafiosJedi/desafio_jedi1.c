// Escreva um programa que converta um intervalo de tempo dado em segundos, em: horas, minutos e segundos. (Por exemplo, se o tempo dado for 3 850 segundos, o programa deve fornecer 1 h 4 min 10 s.)

#include <stdio.h>

int main() {

    int totalemsegundos; // Variável para armazenar o total de segundos
    printf("Digite o valor em segundos que você deseja converter:\n"); // Solicita ao usuário o valor em segundos
    scanf("%d", &totalemsegundos); // Lê o valor digitado pelo usuário

    int horas = totalemsegundos / 3600; // Calcula o número de horas
    int minutos = (totalemsegundos % 3600) / 60; // Calcula o número de minutos
    int segundos = totalemsegundos % 60; // Calcula o número de segundos

    printf("O tempo convertido é: %dh %dmin %ds", horas, minutos, segundos); // Exibe o resultado da conversão

    return 0;
}