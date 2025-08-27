#include <stdio.h>


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
printf("Bem vindo ao jogo XADREZ nivel iniciante!!!\n");

    // Implementação de Movimentação do Bispo
    printf("Bispo se move para...\n");
for(int i = 0; i <  5; i++)
{
    printf("Cima e Direita\n"); // imprime a direção do movimento  
} 

   // Implementação de Movimentação da Torre
    printf("Torre se move para...\n");
    for(int i = 0; i <  5; i++)
{
    printf("Direita\n"); // imprime a direção do movimento    
}

    // Implementação de Movimentação da Rainha
printf("Rainha se move para...\n");
    for(int i = 0; i <  8; i++)
{
    printf("Esquerda\n"); // imprime a direção do movimento    
}
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
