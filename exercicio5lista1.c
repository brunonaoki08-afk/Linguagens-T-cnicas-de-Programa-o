#include <stdio.h>
#include <stdlib.h>
int main() {
    int A, B, C, D; float soma, media, produtoria;
    printf("Digite quatro numeros inteiros separados por enter: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    soma = A + B + C + D;
    media = soma / 4;
    produtoria = A * B * C * D;
    printf("A soma dos quatro numeros e: %.2f\n", soma);
    printf("A media dos quatro numeros e: %.2f\n", media);
    printf("A produtoria dos quatro numeros e: %.2f\n", produtoria);
    return 0;
}