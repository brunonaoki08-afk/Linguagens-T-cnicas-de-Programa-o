#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b, c;
    printf("Digite o valor de a, b e c separando cada um por enter: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        printf("O maior numero e: %d\n", a);
    } else if (b > a && b > c) {
        printf("O maior numero e: %d\n", b);
    } else {
        printf("O maior numero e: %d\n", c);
    }
    return 0;
}