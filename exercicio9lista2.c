#include <stdio.h>
#include <stdlib.h>
int main() {
    int horas, velocidademedia; float distancia, litros;
    printf("Quantas horas voce dirigiu? ");
    scanf("%d", &horas);
    printf("Qual a velocidade media em km/h? ");
    scanf("%d", &velocidademedia);
    distancia = horas * velocidademedia;
    litros = distancia / 12;
    printf("A distancia percorrida foi de %.3f km e o total de litros consumidos foi de %.3f litros\n", distancia, litros);
    return 0;
}