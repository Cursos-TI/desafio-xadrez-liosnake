#include <stdio.h>


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

   void bispo(int casas){
        if (casas > 0) {
            printf("Direita Cima\n");
            bispo(casas - 1);
      
        }
    }
    void torre(int casas){
        if (casas > 0) {
            printf("Direita\n");
            torre(casas - 1);
      
        }
    }
    void rainha(int casas){
        if (casas > 0) {
            printf("Esquerda\n");
            rainha(casas - 1);
      
        }
    }




int main() {

    
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
printf("movimentos peças de Xadrez!!!\n");

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
int movimentocavalo = 1; // para controlar o cavalo

printf("Cavalo se move para...\n");

while (movimentocavalo--)
{
    for (int i = 0; i< 2; i++){
        printf("Baixo\n"); // Imprime 2 casa para baixo
    }
        printf("Esqueda\n"); // Imprime uma casa para esqueda
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados

    printf("Bispo se move para...\n");
         bispo(5);

    printf("\nTorre se move para...\n");
        torre(5);

    printf("\nRainha se move para...\n");
        rainha(8);
        

    return 0;
}

