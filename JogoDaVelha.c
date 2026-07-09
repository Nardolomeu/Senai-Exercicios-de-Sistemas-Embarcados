#include <stdio.h>

int main() {
    char tabuleiro[3][3];
       
        int Linha = 0;
        int Coluna = 0;
        int Velha = 0;
           
            printf("======= JOGO DA VELHA =======\n\n");
           
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
            }
        }
       
            printf("\n %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
           
            printf("\nJogador 1 Comece:\n");
           
            for(;;) {
               
            for(int i = 0; i < 3 ; i++) {
                 
            if(tabuleiro[i][0] == 'X' & tabuleiro[i][1] == 'X' & tabuleiro[i][2] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
                 
            if(tabuleiro[i][0] == 'O' & tabuleiro[i][1] == 'O' & tabuleiro[i][2] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            if(tabuleiro[0][i] == 'X' & tabuleiro[1][i] == 'X' & tabuleiro[2][i] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
                 
            if(tabuleiro[0][i] == 'O' & tabuleiro[1][i] == 'O' & tabuleiro[2][i] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            if(tabuleiro[0][0] == 'X' & tabuleiro[1][1] == 'X' & tabuleiro[2][2] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
           
            if(tabuleiro[0][2] == 'X' & tabuleiro[1][1] =='X' & tabuleiro[2][0] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
           
            if(tabuleiro[0][0] == 'O' & tabuleiro[1][1] == 'O' & tabuleiro[2][2] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            if(tabuleiro[0][2] == 'O' & tabuleiro[1][1] == 'O' & tabuleiro[2][0] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            }
               
            printf("\nJogador 1:\n");
           
            if(Velha == 9) {printf("\nDeu Velha! Empate"); return 0;}
           
            for(;;) {
            printf("\nLinha: ");
            scanf("%d", &Linha);
            printf("Coluna: ");
            scanf("%d", &Coluna);
           
            if(tabuleiro[Linha-1][Coluna-1] == 'X' || tabuleiro[Linha-1][Coluna-1] == 'O') {
            printf("Local Ocupado");
            } else {
            if(Linha > 3 || Linha < 1 || Coluna > 3 || Coluna < 1) {
            printf("Invalido\n");
            } else {
                tabuleiro[Linha-1][Coluna-1] = 'X';
            Velha++;
            break;
                }
            }
            }
           
            printf("\n %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
           
            //////////////////////////////////////
           
            for(int i = 0; i < 3 ; i++) {
                 
            if(tabuleiro[i][0] == 'X' & tabuleiro[i][1] == 'X' & tabuleiro[i][2] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
                 
            if(tabuleiro[i][0] == 'O' & tabuleiro[i][1] == 'O' & tabuleiro[i][2] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            if(tabuleiro[0][i] == 'X' & tabuleiro[1][i] == 'X' & tabuleiro[2][i] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
                 
            if(tabuleiro[0][i] == 'O' & tabuleiro[1][i] == 'O' & tabuleiro[2][i] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            if(tabuleiro[0][0] == 'X' & tabuleiro[1][1] == 'X' & tabuleiro[2][2] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
           
            if(tabuleiro[0][2] == 'X' & tabuleiro[1][1] =='X' & tabuleiro[2][0] == 'X')
            { printf("\nPlayer 1 Ganhou"); return 0; }
           
            if(tabuleiro[0][0] == 'O' & tabuleiro[1][1] == 'O' & tabuleiro[2][2] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            if(tabuleiro[0][2] == 'O' & tabuleiro[1][1] == 'O' & tabuleiro[2][0] == 'O')
            { printf("\nPlayer 2 Ganhou"); return 0; }
           
            }
           
            printf("\nJogador 2:\n");
           
            if(Velha == 9) {printf("\nDeu Velha! Empate"); return 0;}
               
           for(;;) {
            printf("\nLinha: ");
            scanf("%d", &Linha);
            printf("Coluna: ");
            scanf("%d", &Coluna);
           
            if(tabuleiro[Linha-1][Coluna-1] == 'X' || tabuleiro[Linha-1][Coluna-1] == 'O') {
            printf("Local Ocupado");
            } else {
            if(Linha > 3 || Linha < 1 || Coluna > 3 || Coluna < 1) {
            printf("Invalido\n");
            } else {
                tabuleiro[Linha-1][Coluna-1] = 'O';
            Velha++;
            break;
                }
            }
            }
           
            printf("\n %c | %c | %c\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
            printf("---+---+---\n");
            printf(" %c | %c | %c\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
           
            }
       return 0;
    }
