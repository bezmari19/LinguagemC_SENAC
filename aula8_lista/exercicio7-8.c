// 7 - Solicite que o usuário digite um número entre 10 e 20. Se for digitado um numero inválido, peça novamente, até que ele digite um número correto.

#include <stdio.h>

int main() {
    
    int numero; // Declara uma variável inteira para armazenar o número digitado pelo usuário
    printf("Digite um número entre 10 e 20:\n"); // Exibe uma mensagem solicitando ao usuário que digite um número
    scanf("%d", &numero); // Lê o número digitado pelo usuário e armazena na variável numero
    
    while(numero <= 10 || numero >= 20) { // Inicia um loop que continuará enquanto o número digitado for menor ou igual a 10 ou maior ou igual a 20
        printf("Número inválido! Por favor, digite um número entre 10 e 20:\n"); // Exibe uma mensagem de erro
        scanf("%d", &numero); // Lê novamente o número digitado pelo usuário e armazena na variável numero
        if(numero >= 10 && numero <= 20) { // Verifica se o número digitado agora está dentro do intervalo válido
            printf("Número válido!\n"); // Se o número for válido, exibe uma mensagem de sucesso
            printf("Obrigada por usar o programa!\n"); // Exibe uma mensagem de agradecimento
            printf("O número digitado foi: %d\n", numero); // Exibe o número digitado pelo usuário
            printf("Fim do programa.\n"); // Exibe mensagem de fim do programa
            break; // Encerra o loop se o número for válido
        }
    }

    return 0; // Retorna 0 para indicar que o programa executou com sucesso

}