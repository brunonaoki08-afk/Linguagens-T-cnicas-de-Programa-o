#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    float volume, raio;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    volume = (4/3.0) * M_PI * pow(raio, 3);
    printf("O volume da esfera e: %.2f\n", volume);
    return 0;
}
