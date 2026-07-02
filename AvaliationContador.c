#include <stdio.h>

int main() {
    int NotasCliente[15];
   
    for(int i = 0; i < 15; i++) {
        printf("\nDigite uma nota de 1 a 5: ");
        scanf("%d", &NotasCliente[i]);
    }
   
    int Contagem1 = 0;
   
    for(int i = 0; i < 15; i++) {
        if(NotasCliente[i] == 1) {
            Contagem1++;
        }
    }
   
    int Contagem2 = 0;
   
    for(int i = 0; i < 15; i++) {
        if(NotasCliente[i] == 2) {
            Contagem2++;
        }
    }
   
    int Contagem3 = 0;
   
    for(int i = 0; i < 15; i++) {
        if(NotasCliente[i] == 3) {
            Contagem3++;
        }
    }
   
    int Contagem4 = 0;
   
    for(int i = 0; i < 15; i++) {
        if(NotasCliente[i] == 4) {
            Contagem4++;
        }
    }
   
    int Contagem5 = 0;
   
    for(int i = 0; i < 15; i++) {
        if(NotasCliente[i] == 5) {
            Contagem5++;
        }
    }
   
    int total = 0;
    float media = 0;
    total = Contagem1 + Contagem2 * 2 + Contagem3 * 3 + Contagem4 * 4 + Contagem5 * 5;
   
    media = total / 15.0;


    printf("\nO total de notas de 1 estrela dos Clientes foi de: ");
    printf("%d", Contagem1);
   
    printf("\nO total de notas de 2 estrelas dos Clientes foi de: ");
    printf("%d", Contagem2);
   
    printf("\nO total de notas de 3 estrelas dos Clientes foi de: ");
    printf("%d", Contagem3);
   
    printf("\nO total de notas de 4 estrelas dos Clientes foi de: ");
    printf("%d", Contagem4);
   
    printf("\nO total de notas de 5 estrelas dos Clientes foi de: ");
    printf("%d", Contagem5);
   
    printf("\nA media das notas foi de: %.2f \n", media);
   
    if(Contagem1 > Contagem2 && Contagem1 > Contagem3 && Contagem1 > Contagem4 && Contagem1 > Contagem5) {
        printf("A nota mais frequente foi a de 1\n");
        return 0;
    }
   
    if(Contagem2 > Contagem3 && Contagem2 > Contagem4 && Contagem2 > Contagem5) {
        printf("A nota mais frequente foi a de 2");
        return 0;
    }
   
    if(Contagem3 > Contagem4 && Contagem3 > Contagem5) {
        printf("A nota mais frequente foi a de 3");
        return 0;
    }
   
    if(Contagem4 > Contagem5) {
        printf("A nota mais frequente foi a de 4");
        return 0;
    } else {
        printf("A nota mais frequente foi a de 5");
    }
   
    return 0;
}
