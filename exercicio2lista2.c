#include <stdio.h>
#include <stdlib.h>
int main() {
    float K, M;
    printf("Qual a sua velocidade em km/h? ");
    scanf("%f", &K);
    M = K/36;
    printf("Sua velocidade em m/s e: %f\n", M);
    return 0;
}