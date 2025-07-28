// 4 - Escreva um programa que solicita a idade de 5 atletas. Ao final da entrada de dados, informe a idade do atleta mais velho.

#include <stdio.h>

int main() {
    int idade; // Variável para armazenar a idade do atleta
    int idadeAtletas[5]; // Array para armazenar as idades dos atletas

    for(int i = 0; i < 5; i++) { // Loop para solicitar a idade de 5 atletas
        printf("Digite a idade do atleta %d:\n", i + 1); // Solicita a idade do atleta
        scanf("%d", &idade); // Lê a idade do atleta
        idadeAtletas[i] = idade; // Armazena a idade no array

        if(idade > idadeAtletas[0]) { // Verifica se é a maior idade até agora
            idadeAtletas[0] = idade; // Atualiza a maior idade
        }
    }

    printf("A idade do atleta mais velho é: %d\n", idadeAtletas[0]); // Exibe a idade do atleta mais velho
    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}