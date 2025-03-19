#include <stdio.h>

// Função recursiva para a Torre (movimento horizontal e vertical)
void moverTorre(int casas, char direcao) {
    if (casas == 0) return;
    printf("%s\n", direcao == 'V' ? "Cima" : "Direita");
    moverTorre(casas - 1, direcao);
}

// Função recursiva para o Bispo (movimento diagonal)
void moverBispo(int casas, int x, int y) {
    if (casas == 0) return;
    printf("Diagonal: Direita e Cima (Posição: %d, %d)\n", x + 1, y + 1);
    moverBispo(casas - 1, x + 1, y + 1);
}

// Função recursiva para a Rainha (combina Torre e Bispo)
void moverRainha(int casas, char tipo) {
    if (casas == 0) return;
    if (tipo == 'T') {
        printf("Direita\n");
    } else {
        printf("Diagonal Direita e Cima\n");
    }
    moverRainha(casas - 1, tipo);
}

// Função para movimentação do Cavalo utilizando loops aninhados
void moverCavalo(int movimentos) {
    int i, j;
    for (i = 0; i < movimentos; i++) {
        for (j = 0; j < 1; j++) {
            printf("Movimento do Cavalo: 2 casas para cima, 1 para a direita\n");
            continue; // Controla o fluxo do loop
        }
    }
}

int main() {
    int casas = 3; // Número de casas a serem movidas

    printf("Movimento da Torre:\n");
    moverTorre(casas, 'V');
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casas, 0, 0);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casas, 'B');
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo(casas);
    printf("\n");
    
    return 0;
}
