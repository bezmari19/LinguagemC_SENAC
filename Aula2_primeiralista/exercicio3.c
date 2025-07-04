// 3 - Escreva um programa que realiza este cálculo e exibe o valor correto com a mensagem na tela: Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar ___ carros.

#include <stdio.h>

int main()
{
    int carros = 359; // Declaração da variável para armazenar o número de carros
    int pessoas = 4; // Declaração da variável para armazenar o número de pessoas
    int carros_sobrando = carros % pessoas; // Calcula o número de carros que sobram após a distribuição
    
    printf(" Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar %d carros.", carros_sobrando); // Exibe o número de carros que sobram após a distribuição na tela

    return 0; // retorna 0 para indicar que o programa foi executado com sucesso
}