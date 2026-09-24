#include <stdio.h>
#include <stdlib.h>
int main() {
    int sec, min, hour, sectotal;
    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &sectotal);
    hour = sectotal / 3600;
    min = (sectotal % 3600) / 60;
    sec = (sectotal % 3600) % 60;
    printf("O tempo é: %d horas, %d minutos e %d segundos\n", hour, min, sec);
    return 0;
}