#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    float R, G;
    printf("Qual a medida do angulo em graus? ");
    scanf("%f", &G);
    R = G * (M_PI / 180.0);
    printf("O angulo em radianos e: %.2f\n", R);
    return 0;
}