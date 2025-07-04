// 4 - Exiba as seguintes mensagens na tela, fazendo os cálculos necessários pelo programa: Eu tenho um círculo de raio 5. Portanto o diâmetro é ___ A área é ___ E a medida da circunferência é ___

#include <stdio.h> 

int main() {
    float raio = 5.0; // Define o raio do círculo
    float pi = 3.14159; // Define o valor de Pi

    // Calcula o diâmetro
    float diametro = 2 * raio;

    // Calcula a área
    float area = pi * raio * raio; // Ou pi * (raio * raio);

    // Calcula a circunferência
    float circunferencia = 2 * pi * raio;

    // Exibe as mensagens na tela
    printf("Eu tenho um círculo de raio %.2f. Portanto o diâmetro é %.2f. A área é %.2f e a medida da circunferência é %.2f.\n", raio, diametro, area, circunferencia);
    // %.2f formata o número para exibir duas casas decimais

    return 0; // Indica que o programa terminou com sucesso
}