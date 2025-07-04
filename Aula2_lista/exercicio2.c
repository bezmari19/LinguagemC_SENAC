// 2 - Escreva um programa que exibe na tela a seguinte mensagem: Suas notas são ___ e ____ e sua média é ____ (substituindo a parte sublinhada por três valores, sendo que o último é calculado).

#include <stdio.h>

int main()
{
    int nota1, nota2; // Declaração das variáveis para armazenar as notas do aluno
    scanf("%d", &nota1); // Lê a primeira nota do aluno
    scanf("%d", &nota2); // Lê a segunda nota do aluno

    int media_aluno = (nota1 + nota2) / 2;  // Calcula a média das notas do aluno
    
    printf("Suas notas são %d e %d e sua média é %d", nota1, nota2, media_aluno); // Exibe as notas e a média do aluno na tela

    return 0; // retorna 0 para indicar que o programa foi executado com sucesso
}