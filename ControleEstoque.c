#include <stdio.h>

int main() {
   printf("Controle de Estoque\n\n");
   printf("Digite a quantidade que temos em estoque desses 8 produtos:\n");
   
   char produtos[8][20] = {"Caneta", "Borracha", "Caderno", "Cola", "Lapis", "Apontador", "Penal", "Regua"};
   
   int Estoque[8] = {0, 0, 0, 0, 0, 0, 0, 0};
   
   for (int i = 0; i < 8; i++) {
       printf("%d-%s\n", i+1, produtos[i]);
       printf("Em estoque tem: ");
       scanf("%d", &Estoque[i]);
   }
   
   printf("\n\n");
   
   for (int i = 0; i < 8; i++) {
       printf("%d-Em estoque temos %d %s\n", i+1, Estoque[i],produtos[i]);
   }
   
   for (int x = 0; x < 8; x++) {
       if(Estoque[x] < 10) {
           printf("\nO Estoque de %s está baixo, possui menos de 10 unidades\n", produtos[x]);
       }
   }
   
   int maior = 0;
   int posicao = 0;
   
   for (int x = 0; x < 8; x++) {
       if(Estoque[x] > Estoque[maior]) {
          maior = x;
          posicao++;
       }
   }
   
   printf("\nO produto com maior estoque e: %s (com %d unidades)\n", produtos[maior], Estoque[maior]);
   
   printf("\nEsse produto esta na %d posicao\n", posicao+1);

    return 0;
}
