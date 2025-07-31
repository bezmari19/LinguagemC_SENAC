// 5 - Escreva uma função chamada Potencia(base, expoente) que, quando chamada, retorna baseexpoente. Por exemplo, potencia(2, 5) deve retornar 32. Assuma que expoente é sempre um número inteiro maior ou igual a 1.  Sua função deve calcular o valor através de uma estrutura de repetição, sem chamar a função de potência da linguagem C.

#include <stdio.h>

int Potencia(int base, int expoente) { // Função para calcular a potência
    int resultado = 1; // Inicializa o resultado como 1
    for(int i = 0; i < expoente; i++) { // Loop que itera expoente vezes
        resultado *= base; // Multiplica o resultado pela base em cada iteração
    }
    return resultado; // Retorna o resultado final
}

int main() { 
    int base, expoente; // Declaração das variáveis base e expoente
    printf("Digite o número para a base:\n"); // Solicita ao usuário a base
    scanf("%d", &base); // Lê a base fornecida pelo usuário
    printf("Digite o número para o expoente:\n"); // Solicita ao usuário o expoente
    scanf("%d", &expoente); // Lê o expoente fornecido pelo usuário

    int resultado = Potencia(base, expoente); // Chama a função Potencia 
    printf("Resultado: %d\n", resultado); // Exibe o resultado
}