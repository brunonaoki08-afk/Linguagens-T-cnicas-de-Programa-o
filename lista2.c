#include <stdio.h>
int main(){
    int nascimento, idade, anoatual;
    printf("Quantos anos voce tem? ");
    scanf("%d", &idade);
    printf("Em que ano estamos? ");
    scanf("%d", &anoatual);
    nascimento = anoatual - idade;
    printf("Voce nasceu em %d\n", nascimento);
    return 0;
}