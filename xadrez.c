#include <stdio.h>

int main() {
    // NIVEL NOVATO 🏅
    // Variáveis para controle das estruturas de repetição
    int i;                    // Contador para loop for (Torre)
    int contador_bispo = 0;   // Contador para loop while (Bispo)
    int contador_rainha = 0;  // Contador para loop do-while (Rainha)
    
    // Constantes que definem o número de casas a mover
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
    
    // ============================================
    // TORRE: Movimento horizontal e vertical (5 casas)
    // Move-se em linha reta: Direita, Esquerda, Cima, Baixo
    // Utilizando estrutura de repetição FOR
    // ============================================
    printf("Torre movendo em linha reta:\n");
    
    for (i = 0; i < CASAS_TORRE; i++) {
        printf("Direita\n");
        printf("Esquerda\n");
        printf("Cima\n");
        printf("Baixo\n");
    }
    
    printf("\n"); // Linha em branco para separar as saídas
    
    // ============================================
    // BISPO: Movimento diagonal (5 casas)
    // Para cada casa: Cima, Direita, Baixo, Esquerda
    // Utilizando estrutura de repetição WHILE
    // ============================================
    printf("Bispo movendo na diagonal:\n");
    
    while (contador_bispo < CASAS_BISPO) {
        printf("Cima\n");
        printf("Direita\n");
        printf("Baixo\n");
        printf("Esquerda\n");
        contador_bispo++;
    }
    
    printf("\n"); // Linha em branco para separar as saídas
    
    // ============================================
    // RAINHA: Movimento em todas as direções (8 casas)
    // Move-se como Torre e Bispo: Cima, Baixo, Direita, Esquerda
    // Utilizando estrutura de repetição DO-WHILE
    // ============================================
    printf("Rainha movendo em todas as direcoes:\n");
    
    do {
        printf("Cima\n");
        printf("Baixo\n");
        printf("Direita\n");
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < CASAS_RAINHA);
    
    printf("\n"); // Linha em branco para separar as saídas
    
    return 0;
}

