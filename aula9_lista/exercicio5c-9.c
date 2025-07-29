// 5c - não restrinja a entrada de dados a apenas 5 atletas. Agora após a inclusão de cada atleta o programa deve perguntar ao usuário se deseja incluir outro. A resposta é dada com 1 - Sim e 2 - Não. O programa continua mostrando o código do mais velho, e a idade média.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int codigo, idade;
    int idadeMaisvelho = 0; // Idade do atleta mais velho
    int codigoMaisvelho = 0; // Código do atleta mais velho
    int somaIdade = 0; // Inicializa a soma das idades
    int Atletas = 0; // Contador de atletas
    int adicionarAtleta;

    while(adicionarAtleta != 2) {
        printf("Digite o código do atleta %d:\n", Atletas + 1);
        scanf("%d", &codigo);
        printf("Digite a idade do atleta %d:\n", Atletas + 1);
        scanf("%d", &idade);
        somaIdade += idade;
        Atletas++;

        if(Atletas == 1 || idade > idadeMaisvelho) {
            idadeMaisvelho = idade; // Atualiza a idade do atleta mais velho
            codigoMaisvelho = codigo; // Atualiza o código do atleta mais velho
        }
        printf("Deseja incluir outro atleta na lista? Digite 1 para sim ou 2 para não:\n");
        scanf("%d", &adicionarAtleta);
        if(adicionarAtleta == 1) {
            printf("Adicionando mais um atleta a lista...\n");
            continue;
        } else if(adicionarAtleta == 2) {
            if (Atletas > 0) {
                int mediaIdade = somaIdade / Atletas; // Calcula a média de idade dos atletas
                printf("A média de idade dos atletas é: %d\n", mediaIdade); // Exibe a idade média dos atletas
                printf("O código do atleta mais velho é: %d\n", codigoMaisvelho); // Exibe o código do atleta mais velho
            } else {
                printf("Nenhum atleta foi adicionado.\n");
        }
        }
        printf("Fim do programa!\n");
        return 0; // Indica que o programa terminou com sucesso
    }

}