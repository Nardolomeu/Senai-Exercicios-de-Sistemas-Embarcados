#include <stdio.h>

int main() {
   
    int Escolha = -1;
    int votos[5] = {0, 0, 0, 0, 0};
   
   for (;;) {
        printf("Digite em qual candidato voce quer votar:\n\n");
        printf("1-Candidato\n");
        printf("2-Candidato\n");
        printf("3-Candidato\n");
        printf("4-Candidato\n");
        printf("5-Encerrar votacao\n");
       
        scanf("%d", &Escolha);
        if(Escolha == 5) {
            break;
        }
       
        if (Escolha >= 1 && Escolha <= 4) {
            votos[Escolha-1] = votos[Escolha-1] +1;
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
       
   }
   
   for (int x = 0; x < 4; x++) {
   printf("\nO Candidato %d ficou com %d votos.\n", x+1,votos[x]);
   }
   
   int maior = 0;
   
   for (int x = 0; x < 4; x++) {
       if(votos[x] > votos[maior]) {
           maior = x;
       }
   }
   
   int empate = 0;
   
   for (int x = 0; x < 4; x++) {
       if(votos[x] == votos[maior]) {
           empate++;
       }
   }
   
   if (empate > 1) {
       printf("\nOuve empate entre os candidatos, %d deles empataram", empate);
   } else {
       printf("\nO Candidato %d ganhou a eleicao.", maior+1);
   }
   
    return 0;
}
