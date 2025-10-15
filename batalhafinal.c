#include <stdio.h>

// ============================================================
// Desafio Batalha Naval - MateCheck
// Projeto completo: Nível Novato → Aventureiro → Mestre
// Autor: Rogério da Silva Ferreira
// Data: 15/10/2025
// ============================================================

int main() {

    // ============================================================
    // NÍVEL NOVATO - POSICIONAMENTO DOS NAVIOS (TABULEIRO 5x5)
    // ============================================================

    int tabuleiroNovato[5][5];
    int tamanhoNavio = 3;

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiroNovato[i][j] = 0;
        }
    }

    // Navio horizontal - linha 1
    int linhaHorizontal = 1;
    int colunaHorizontal = 0;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiroNovato[linhaHorizontal][colunaHorizontal + i] = 3;
        printf("Navio Horizontal - Posição: [%d][%d]\n", linhaHorizontal, colunaHorizontal + i);
    }

    // Navio vertical - coluna 3
    int linhaVertical = 0;
    int colunaVertical = 3;
    for (int i = 0; i < tamanhoNavio; i++) {
        tabuleiroNovato[linhaVertical + i][colunaVertical] = 3;
        printf("Navio Vertical - Posição: [%d][%d]\n", linhaVertical + i, colunaVertical);
    }

    printf("\n=== TABULEIRO NÍVEL NOVATO ===\n\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiroNovato[i][j]);
        }
        printf("\n");
    }

    // ============================================================
    // NÍVEL AVENTUREIRO - EXPANSÃO DO TABULEIRO (10x10)
    // ============================================================

    int tabuleiroAventureiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiroAventureiro[i][j] = 0;
        }
    }

    // Quatro navios: horizontal, vertical, diagonal principal e diagonal inversa
    // Todos de tamanho 3

    // Navio 1 - Horizontal
    for (int j = 2; j < 2 + tamanhoNavio; j++) {
        tabuleiroAventureiro[1][j] = 3;
    }

    // Navio 2 - Vertical
    for (int i = 5; i < 5 + tamanhoNavio; i++) {
        tabuleiroAventureiro[i][7] = 3;
    }

    // Navio 3 - Diagonal principal (↘)
    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiroAventureiro[3 + k][3 + k] = 3;
    }

    // Navio 4 - Diagonal inversa (↙)
    for (int k = 0; k < tamanhoNavio; k++) {
        tabuleiroAventureiro[6 + k][2 - k + tamanhoNavio - 1] = 3; // mantido dentro dos limites
    }

    // Exibição do tabuleiro Aventureiro
    printf("\n=== TABULEIRO NÍVEL AVENTUREIRO ===\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroAventureiro[i][j]);
        }
        printf("\n");
    }

    // ============================================================
    // NÍVEL MESTRE - HABILIDADES ESPECIAIS (MATRIZES DE ÁREA)
    // ============================================================

    int habilidade[5][5];

    // ----------------------------------------
    // Habilidade em CONE
    // ----------------------------------------
    printf("\n=== HABILIDADE: CONE ===\n\n");
    int cone[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // ----------------------------------------
    // Habilidade em CRUZ
    // ----------------------------------------
    printf("\n=== HABILIDADE: CRUZ ===\n\n");
    int cruz[5][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    // ----------------------------------------
    // Habilidade em OCTAEDRO
    // ----------------------------------------
    printf("\n=== HABILIDADE: OCTAEDRO ===\n\n");
    int octaedro[5][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    // ============================================================
    // FIM DO PROJETO
    // ============================================================
    printf("\nSimulação completa: todos os níveis concluídos com sucesso!\n");

    return 0;
}
