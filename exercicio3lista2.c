#include <stdio.h>
#include <stdlib.h>
int main() {
    float real, dolar, cotacao;
    printf("Quantos reais voce tem?");
    scanf("%f", &real);
    printf("Qual a cotacao do dolar atualmente?"); 
    scanf("%f", &cotacao);
    dolar = real / cotacao;
    printf("Voce tem %.2f dolares\n", dolar);
    return 0;
}