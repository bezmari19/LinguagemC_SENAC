// 6 - Solicite que seja digitado um número que seja par e maior que 200 e múltiplo de 4.

#include <stdio.h>

int main() {
    
    int numero; // Variável para armazenar o número digitado pelo usuário
    printf("Digite um número maior que 200 e que seja par:\n"); //
    scanf("%d", &numero); // Lê o número digitado pelo usuário
    
    while(numero > 200 && numero % 2 == 0) { // Enquanto o número for maior que 200 e par
        if(numero % 4 == 0) { // Verifica se o número é múltiplo de 4
            printf("Número válido!.\n"); // Exibe mensagem de número válido
            printf("Digite outro número maior que 200 e que seja par:\n"); // Solicita outro número
            scanf("%d", &numero); // Lê o novo número digitado pelo usuário
        } else { // Se o número não for múltiplo de 4
            printf("O número que você digitou não é válido!\n"); // Exibe mensagem de número inválido
            break; // Encerra o loop
        }
    }
    printf("Fim do programa.\n"); // Exibe mensagem de fim do programa
    return 0; // Retorna 0 para indicar que o programa terminou corretamente

}