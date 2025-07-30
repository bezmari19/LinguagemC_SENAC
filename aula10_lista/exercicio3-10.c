// 3 - Escreva um programa exibe na tela o padrão a seguir:
// *
// ** 
// ***

#include <stdio.h>

int main() { 
    for (int i = 1; i <= 3; i++) { // loop para cada linha 
        for (int j = 1; j <= i; j++) { // loop para imprimir os asteriscos
            printf("*"); // imprime o asterisco
        }
        printf("\n"); // pula para a próxima linha após imprimir os asteriscos
    }
    return 0; // retorna 0 para indicar que o programa terminou com sucesso
}
