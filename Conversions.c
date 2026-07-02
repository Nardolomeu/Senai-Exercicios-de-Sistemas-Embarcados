#include <stdio.h>

int main() {
   
    int Fim = 0;
    int Escolha = 0;
    float Temperatura1 = 0;
    float UnidadeMedida1 = 0;
    float Convercão = 0;
    int RespostaUsuario = -1;
   
    while(Fim == 0) {
        printf("Digite o número de seu interesse:\n\n");
       
        printf("1-Celsius para Fahrenheit\n");
        printf("2-Fahrenheit para Celsius\n");
        printf("3-Quilômetros para Milhas\n");
        printf("4-Milhas para Quilômetros\n");
        printf("5-Sair\n");
       
        scanf("%d", &Escolha);
       
        if(Escolha == 1) {
            printf("\nEscolhido: Celsius para Fahrenheit\nDigite a temperatura em Celsius: ");
            scanf("%f", &Temperatura1);
            Convercão = Temperatura1 * 1.8 + 32;
            printf("\nEm Fahrenheit fica: %.2f \n\n", Convercão);
        }
       
        if(Escolha == 2) {
            printf("\nEscolhido: Fahrenheit para Celsius\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &Temperatura1);
            Convercão = (Temperatura1 -32) / 1.8;
            printf("\nEm Celsius fica: %.2f \n\n", Convercão);
        }
       
        if(Escolha == 3) {
            printf("\nEscolhido: Quilômetros para Milhas\nDigite o comprimento em Quilometros: ");
            scanf("%f", &UnidadeMedida1);
            Convercão = UnidadeMedida1 * 0.621371;
            printf("\nEm Milhas fica: %.2f \n\n", Convercão);
        }
       
        if(Escolha == 4) {
            printf("\nEscolhido: Milhas para Quilômetros\nDigite o comprimento em Milhas: ");
            scanf("%f", &UnidadeMedida1);
            Convercão = UnidadeMedida1 / 0.621371;
            printf("\nEm Quilômetros fica: %.2f \n\n", Convercão);
        }
       
        if(Escolha == 5) {
            Fim = 1;
            continue;
        }
       
    }
   
    return 0;
}
