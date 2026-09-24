#include <stdio.h>
#include <stdlib.h>
int main() {
    float C, F;
    printf("Qual a temperatura em graus Celsius? ");
    scanf("%f", &C);
    F = C * (9.0/5.0) + 32.0;
    printf("A temperatura em graus Fahrenheit e: %.2f\n", F);
    return 0;
}