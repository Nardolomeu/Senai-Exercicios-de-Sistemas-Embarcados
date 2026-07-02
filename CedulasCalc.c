#include <stdio.h>

int main() {
   
    int saque = 0;
   
   printf("Digite o valor que deseja para saque: \n");
   scanf("%d", &saque);
   
    printf("Para um saque de: %d\n", saque);
   
   int Cédula100 = 100;
   int Cédula100Contagem = 0;
   
   for(int i = 99; i < saque; Cédula100Contagem++) {
        saque = saque - Cédula100;
    }
   
   int Cédula50 = 50;
   int Cédula50Contagem = 0;
   
   for(int i = 49; i < saque; Cédula50Contagem++) {
        saque = saque - Cédula50;
    }
   
   int Cédula20 = 20;
   int Cédula20Contagem = 0;
   
   for(int i = 19; i < saque; Cédula20Contagem++) {
        saque = saque - Cédula20;
    }
   
   int Cédula10 = 10;
   int Cédula10Contagem = 0;
   
   for(int i = 9; i < saque; Cédula10Contagem++) {
        saque = saque - Cédula10;
    }
   
   int Cédula5 = 5;
   int Cédula5Contagem = 0;
   
   for(int i = 4; i < saque; Cédula5Contagem++) {
        saque = saque - Cédula5;
    }
   
    int Cédula2 = 2;
   int Cédula2Contagem = 0;
   
   for(int i = 1; i < saque; Cédula2Contagem++) {
        saque = saque - Cédula2;
    }
   
    int Cédula1 = 1;
   int Cédula1Contagem = 0;
   
   for(int i = 0; i < saque; Cédula1Contagem++) {
        saque = saque - Cédula1;
    }
   
   (Cédula100Contagem > 0) ? printf("Será lhe dado %d Cédulas de 100.\n", Cédula100Contagem) : 0;
   (Cédula50Contagem > 0) ? printf("Será lhe dado %d Cédulas de 50.\n", Cédula50Contagem) : 0;
   (Cédula20Contagem > 0) ? printf("Será lhe dado %d Cédulas de 20.\n", Cédula20Contagem) : 0;
   (Cédula10Contagem > 0) ? printf("Será lhe dado %d Cédulas de 10.\n", Cédula10Contagem) : 0;
   (Cédula5Contagem > 0) ? printf("Será lhe dado %d Cédulas de 5.\n", Cédula5Contagem) : 0;
   (Cédula2Contagem > 0) ? printf("Será lhe dado %d Cédulas de 2.\n", Cédula2Contagem) : 0;
   (Cédula1Contagem > 0) ? printf("Será lhe dado %d Cédulas de 1.\n", Cédula1Contagem) : 0;
   
    return 0;
}
