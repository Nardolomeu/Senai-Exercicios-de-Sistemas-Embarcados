#include <stdio.h>

int main() {
    int numero;
    int ehprimo = 1;
   
    printf("Digite um numero: ");
    scanf("%d", &numero);
   
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            ehprimo = 0;
        }
    }
   
    if (ehprimo == 1) {
        printf("O numero e primo!");
    } else {
        printf("O numero nao e primo...");
    }
   
    return 0;
}
