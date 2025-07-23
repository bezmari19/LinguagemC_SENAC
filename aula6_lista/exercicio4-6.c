// 4 - Escreva um programa que sorteia um número de 1 a 10, dá duas chances para que o usuário acerte, mas dá uma pista após a primeira tentativa, dizendo se o número sorteado é maior ou menor que o primeiro palpite

#include <stdio.h>  // Biblioteca para entrada e saída padrão
#include <stdlib.h> // Biblioteca para funções de utilidade geral (rand, srand)
#include <time.h>   // Biblioteca para funções relacionadas ao tempo

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual como semente
    srand(time(NULL));
    
    // Gera um número aleatório entre 1 e 10 (rand() % 10 retorna 0-9, +1 = 1-10)
    int numero_sorteado = rand() % 10 + 1;
    // Mostra o número sorteado (para debug/teste - pode ser removido na versão final)
    printf("Número sorteado: %d\n", numero_sorteado);
    // Inicializa o número de chances do jogador
    int chances = 2;
    
    // Declara variável para armazenar o palpite do usuário
    int palpite;

    // Exibe as instruções do jogo
    printf("Bem-vindo ao jogo da adivinhação!\n");
    printf("Tente adivinhar o número sorteado entre 1 e 10.\n");
    printf("Você tem %d chances.\n", chances);
    printf("Digite seu palpite:\n");
    
    // Lê o primeiro palpite do usuário
    scanf("%d", &palpite);

    // Verifica se o palpite está fora do intervalo válido (1-10)
    if (palpite < 1 || palpite > 10) {
        printf("Palpite inválido! O número deve estar entre 1 e 10.\n");
        chances--; // Decrementa o número de chances
        printf("Você perdeu uma chance. Restam %d chances.\n", chances);
    } 
    // Verifica se o palpite está no intervalo válido mas não é o número correto
    else if (palpite >= 1 && palpite <= 10 && palpite != numero_sorteado) {
        printf("Palpite inválido! O número não corresponde ao número sorteado.\n");
        chances--; // Decrementa o número de chances
        printf("Você perdeu uma chance. Restam %d chances.\n", chances);
    } 
    // Se chegou aqui, o palpite está correto
    else {
        printf("Parabéns! Você acertou o número sorteado.\n");
        printf("O número sorteado era: %d\n", numero_sorteado);
    } 

    if (numero_sorteado > palpite) {
        printf("DICA: O número sorteado é maior que o seu palpite.\n");
    } else if (numero_sorteado < palpite) {
        printf("DICA: o número sorteado é menor que o seu palpite.\n");
    }

    // Segunda chance - só executa se o jogador errou na primeira tentativa
    printf("Você ainda tem mais um chance %d.\n", chances);
    printf("Digite o seu último palpite:\n");
    
    // Lê o segundo (e último) palpite do usuário
    scanf("%d", &palpite);

    // Verifica novamente se o palpite está fora do intervalo válido
    if (palpite < 1 || palpite > 10) {
        printf("Palpite inválido!\n");
        chances--; // Decrementa a última chance
        printf("Você perdeu sua última chance.\n");
        printf("O número sorteado era: %d\n", numero_sorteado);
    } 
    // Verifica se o palpite está no intervalo válido mas não é o número correto
    else if (palpite >= 1 && palpite <= 10 && palpite != numero_sorteado) {
        printf("Palpite inválido!\n");
        chances--; // Decrementa a última chance
        printf("Você perdeu sua última chance.\n");
        printf("O número sorteado era: %d\n", numero_sorteado);
    } 
    // Se chegou aqui, o palpite da segunda chance está correto
    else {
        printf("Parabéns! Você acertou o número sorteado.\n");
        printf("E você conseguiu acertar com %d chances restantes.\n", chances);
        printf("O número sorteado era: %d\n", numero_sorteado);
    }

    // Retorna 0 para indicar que o programa executou com sucesso
    return 0;

}