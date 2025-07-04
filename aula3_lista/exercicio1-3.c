// Escreva um programa que ajuda os alunos a calcularem as notas desta disciplina. O programa deve perguntar as notas da primeira e da segunda prova, calcular a média aritmética entre elas, e exibir na tela.
// O programa a seguir é feito de forma simplificada, sem condicionais ou notas com valores de dois pontos decimais(double, float)

#include <stdio.h> 

int main() {
    
    int primeira_prova, segunda_prova; // Declaração das variáveis para armazenar as notas do aluno
    // Solicita ao usuário que digite as notas das provas
    printf("Digite a nota da primeira prova:\n");
    scanf("%d", &primeira_prova);
    printf("Digite a nota da segunda prova:\n");
    scanf("%d", &segunda_prova);
    
    int media_aluno = (primeira_prova + segunda_prova) / 2; // Calcula a média das notas do aluno

    printf("Sua média é: %d", media_aluno); // Exibe a média do aluno na tela

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}