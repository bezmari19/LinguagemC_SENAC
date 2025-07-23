// 2 - Sorteie 3 números de 1 a 10, e aplique todas as coisas que fizemos com o programa sobre triângulos da lista passada, verificando se forma um triângulo e classificando o mesmo.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num1, num2, num3;
    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    num3 = rand() % 10 + 1;
    
    printf("Os números sorteados foram: %d, %d e %d.\n", num1, num2, num3);

    if (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1) {
        printf("Os números sorteados formam um triângulo.\n");
    } else {
        printf("Os números sorteados não formam um triângulo.\n");
    }
    if (num1 == num2 && num2 == num3) {
        printf("O triângulo é equilátero.\n");
    } else if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("O triângulo é isósceles.\n");
    } else if (num1 != num2 && num1 != num3 && num2 != num3) {
        printf("O triângulo é escaleno.\n");
    } else if (num1 * num1 + num2 * num2 == num3 * num3 ||
               num1 * num1 + num3 * num3 == num2 * num2 ||
               num2 * num2 + num3 * num3 == num1 * num1) {
        printf("O triângulo é retângulo.\n");
    } else {
        printf("Não é possível classificar o triângulo.\n");
    }

    return 0;
}