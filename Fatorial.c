#include <stdio.h>

int main() {
    int numero = 0;
   
    printf("Digite um numero e eu darei o fatorial dele: ");
    scanf("%d", &numero);
   
    int fatorial = 1;
   
    for (int x = 1; x <= numero; x++) {
        fatorial = fatorial * x;
    }
   
    printf("O fatorial de %d e: %d\n", numero, fatorial);
   
    return 0;
}
