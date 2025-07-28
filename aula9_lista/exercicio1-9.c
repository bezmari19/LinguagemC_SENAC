// 1 - Solicite um número e então diga se este é um número perfeito.

int main() {
    int numero; // Variável para armazenar o número informado pelo usuário
    int soma = 0; // Variável para armazenar a soma dos divisores

    printf("Digite um número da sua escolha:"); // Solicita ao usuário que digite um número
    scanf("%d", &numero); // Lê o número informado pelo usuário

    for(int i = 1; i < numero; i++) { // Loop para encontrar os divisores do número
        if(numero % i == 0) { // Verifica se 'i' é um divisor de 'numero'
            soma += i;// Adiciona o divisor à soma
        }
    }

    if(soma == numero) {
        printf("Esse, é um número perfeito!\n"); // Verifica se a soma dos divisores é igual ao número
    } else {
        printf("Esse, não é um número perfeito.\n"); // Caso contrário, informa que não é um número perfeito
    }

}