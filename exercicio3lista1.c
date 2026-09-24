#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, resto, i;
    printf("Digite um numero aqui: ");
    scanf("%d", &n);
    if (n < 0 || n > 64) {
        printf("Numero invalido, digite um numero entre 0 e 64\n");
    } else if (n == 0) {
        printf("Binario: 0\n");
    } else {
        printf("Binario: ");
        while (n > 0) {
            resto = n % 2;
            printf("%d", resto);
            n = n / 2;
        }
        printf("\n");
    }
    return 0;
}