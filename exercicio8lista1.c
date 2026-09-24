#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    float a, b, c, d, distancia;
    printf("Digite quatro numeros inteiros: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    distancia = sqrt((a - b)*(a - b) + (c - d)*(c - d));
    printf("A distancia entre os pontos e: %.2f\n", distancia);
    return 0;
}
