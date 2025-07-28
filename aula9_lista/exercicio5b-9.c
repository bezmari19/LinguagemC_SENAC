// informe também a idade média destes 5 atletas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int codigo, idade; // Código e idade do atleta
    int Atletas = 5; // Número de atletas
    int idadeMaisvelho = 0; // Idade do atleta mais velho
    int codigoMaisvelho = 0; // Código do atleta mais velho
    int somaIdade = 0; // Inicializa a soma das idades

    for(int i = 0; i < Atletas; i++) { // Loop para ler os dados dos atletas
        printf("Digite o código do atleta %d: ", i + 1); // Solicita o código do atleta
        scanf("%d", &codigo); // Lê o código do atleta
        printf("Digite a idade do atleta %d: ", i + 1); // Solicita a idade do atleta
        scanf("%d", &idade); // Lê a idade do atleta

        somaIdade += idade; // Acumula a idade para calcular a média posteriormente

        if (i == 0 || idade > idadeMaisvelho) { // Verifica se é o primeiro atleta ou se a idade é maior que a do mais velho encontrado
            idadeMaisvelho = idade; // Atualiza a idade do atleta mais velho
            codigoMaisvelho = codigo; // Atualiza o código do atleta mais velho
        }
    }

    int mediaIdade = somaIdade / Atletas; // Calcula a média de idade dos atletas
    printf("A media de idade dos atletas é: %d\n", mediaIdade); // Exibe a idade média dos atletas
    printf("O código do atleta mais velho é: %d\n", codigoMaisvelho); // Exibe o código do atleta mais velho
    return 0; // Indica que o programa terminou com sucesso

}