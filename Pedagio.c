#include <stdio.h>

int main() {
   
    int Veiculos[3] = {0,0,0};
   
    int Moto = Veiculos[0];
    int Carro = Veiculos[1];
    int Caminhão = Veiculos[2];
   
    printf("Digite o tipo de veiculo que passou no pedágio:\n", Carro);
    printf("1-Moto\n2-Carro\n3-Caminhao\n\n", Carro);
   
    int Resposta = 0;
   
    for (int i = 0; i < 20; i++) {
       scanf("%d", &Resposta);
       Veiculos[Resposta-1]++;
   }
   
   int ValorMoto = 5 * Veiculos[0];
   int ValorCarro = 10 * Veiculos[1];
   int ValorCaminhao = 20 * Veiculos[2];

    printf("O numero de motos foi de: %d\n", Veiculos[0]);
    printf("Com o valor total arrecadado de: %d Reais\n\n", ValorMoto);
    printf("O numero de Carros foi de: %d\n", Veiculos[1]);
    printf("Com o valor total arrecadado de: %d Reais\n\n", ValorCarro);
    printf("O numero de Caminhoes foi de: %d\n", Veiculos[2]);
    printf("Com o valor total arrecadado de: %d Reais\n\n", ValorCaminhao);
   
    return 0;
}
