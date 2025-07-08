// Em uma festa, homens pagam 20 reais de entrada e as mulheres pagam 17. Crie um programa que pergunta quantos homens e quantas mulheres participaram da festa e calcula o valor total arrecadado com as entradas.

#include <stdio.h>

int main()
{
    int entradaH = 20; // valor de entrada dos homens
    int entradaM = 17; // valor de entrada das mulheres
    
    int quantasMulheres; int quantosHomens; // variaveis para armazenar a quantidade de mulheres e homens 
    printf("Quantas mulheres foram na festa? Digite aqui:\n"); // solicita a quantidade de mulheres
    scanf("%d", &quantasMulheres); // lê a quantidade de mulheres
    printf("Quantos homens foram na festa? Digite aqui:\n"); // solicita a quantidade de homens
    scanf("%d", &quantosHomens); // lê a quantidade de homens
    
    int valor_total_arrecadado = (quantasMulheres*entradaM) + (quantosHomens*entradaH); // calcula o valor total arrecadado com as entradas 
    
    printf("O total arrecadado na festa foi: R$%d,00", valor_total_arrecadado); // exibe o resultado do calculo na tela

    return 0;
}