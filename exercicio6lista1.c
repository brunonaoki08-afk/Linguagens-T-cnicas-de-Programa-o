#include <stdio.h>
#include <stdlib.h>
int main() {
    int dias, meses, anos, totaldias;
    printf("Quantos dias voce tem de vida? ");
    scanf("%d", &totaldias);
    anos = totaldias / 365;
    meses = (totaldias % 365) / 30;
    dias = (totaldias % 365) % 30;
    printf("Voce tem %d anos, %d meses e %d dias de vida\n", anos, meses, dias);
    return 0;
}