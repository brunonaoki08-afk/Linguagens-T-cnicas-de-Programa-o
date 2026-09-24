#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    printf("Digite dois numeros inteiros separados por enter: ");
    scanf("%d %d", &a, &b);
    printf("A ordem inversa dos numeros e: %d %d\n", b, a);
    return 0;
}