// Escreva um algoritmo para calcular o consumo médio de um automóvel (medido em km/l), dado que são conhecidos a distância total percorrida e o volume de combustível consumido para percorrê-la (medido em litros).

#include <stdio.h> 

int main() {
    
    float distancia; // Distância percorrida em km
    float quantidade_combustivel; // Quantidade de combustível consumida em litros
    printf("Digite a distância percorrida:\n"); // Solicita a distância percorrida
    scanf("%f", &distancia); // Lê a distância percorrida do usuário
    printf("Digite a quantidade de combustível consumida:\n"); // Solicita a quantidade de combustível consumida
    scanf("%f", &quantidade_combustivel); // Lê a quantidade de combustível consumida do usuário
    
    float consumo_medio = distancia / quantidade_combustivel; // Calcula o consumo médio (km/l)
    
    printf("O seu consumo médio por km/l: %.2f", consumo_medio); // Exibe o consumo médio formatado com duas casas decimais

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}