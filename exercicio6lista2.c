#include <stdio.h>
#include <stdlib.h>
int main() {
    int numero, antes, depois;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    antes = numero - 1;
    depois = numero + 1;
    printf("O antecessor e o %d e o sucessor e o %d\n", antes, depois);
    return 0;
}