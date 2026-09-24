#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\nOrdem inversa dos numeros: %d %d\n", b, a);
    return 0;
}