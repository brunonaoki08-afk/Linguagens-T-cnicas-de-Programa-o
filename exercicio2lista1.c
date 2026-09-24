#include <stdio.h>
#include <stdlib.h>
int main() {
    double valorA; int valorN; float A;
    printf("Digite o valor de A entre 1 e 9: ");
    scanf("%lf", &valorA);
    if (valorA < 1 || valorA > 9) {
        printf("Valor invalido, digite um valor entre 1 e 9\n");
        return 1;
    } else {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &valorN);
    }
  
    A = valorA*10*valorN;
    printf("O valor de A é: %.2f\n", A);
    return 0;
}
