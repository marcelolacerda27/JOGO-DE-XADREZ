#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo com loops complexos
void moverCavalo() {
    for (int i = 1; i <= 2; i++) { // Duas casas para cima
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++) { // Uma casa para a direita
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados
void moverBispoComLoopsAninhados(int casas) {
    for (int i = 1; i <= casas; i++) { // Loop externo para movimento vertical
        for (int j = 1; j <= casas; j++) { // Loop interno para movimento horizontal
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre com recursividade
    printf("Movimento da Torre:\n");
    moverTorre(5); // Move 5 casas para a direita
    printf("\n");

    // Movimento do Bispo com recursividade
    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(5); // Move 5 casas na diagonal
    printf("\n");

    // Movimento da Rainha com recursividade
    printf("Movimento da Rainha:\n");
    moverRainha(8); // Move 8 casas para a esquerda
    printf("\n");

    // Movimento do Cavalo com loops complexos
    printf("Movimento do Cavalo:\n");
    moverCavalo(); // Move em "L": duas casas para cima e uma para a direita
    printf("\n");

    // Movimento do Bispo com loops aninhados
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoopsAninhados(5); // Move 5 casas na diagonal com loops aninhados
    printf("\n");

    return 0;
}