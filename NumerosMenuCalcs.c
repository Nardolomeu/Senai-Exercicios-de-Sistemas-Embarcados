#include <stdio.h>

int main() {
    int numeros[10];
    int soma = 0;
    int resposta = 0;
   
    for(int i = 0; i < 10; i++) {
        printf("\nDigite um número: ");
        scanf("%d", &numeros[i]);
    }
   
   while (0 == 0) {
   
   printf("\nDigite o número de seu interesse:\n\n");
       
        printf("1-Mostrar todos os elementos.\n");
        printf("2-Mostrar apenas os números pares.\n");
        printf("3-Mostrar apenas os números ímpares.\n");
        printf("4-Mostrar o maior valor.\n");
        printf("5-Mostrar a média.\n");
        printf("6-Sair\n");
       
        scanf("%d", &resposta);
       
        switch (resposta) {
        case 1:
            printf("Voce escolheu a Opcao 1.\n");
            for (int i = 0; i < 10; i++) {
                printf("%d\n", numeros[i]);
            }
            break;
        case 2:
            printf("Voce escolheu a Opcao 2.\n");
            for (int i = 0; i < 10; i++) {
                if (numeros[i] % 2 == 0) {
                    printf("%d\n", numeros[i]);
                   
                }
            }
            break;
        case 3:
            printf("Voce escolheu a Opcao 3.\n");
            for (int i = 0; i < 10; i++) {
                if (numeros[i] % 2 == 1) {
                    printf("%d\n", numeros[i]);
                }
            }
            break;
        case 4:
            printf("Voce escolheu a Opcao 4.\n");
           
            int maior = numeros[0];
            for (int i = 0; i < 10; i++) {
                if (numeros[i] > maior) {
                    maior = numeros[i];
                }
            }
            printf("O maior valor e: %d\n", maior);
            break;
        case 5:
            printf("Voce escolheu a Opcao 5.\n");
            float media = 0;
            for (int i = 0; i < 10; i++) {
                media = media + numeros[i];
            }
            media = media / 10;
   
    printf("A media e de: %.2f\n", media);
            break;
        case 6:
            printf("Saindo....\n");
            return 0;
        default:
            printf("Opcao invalida.\n");
            break;
    }
   }
   
    return 0;
}
