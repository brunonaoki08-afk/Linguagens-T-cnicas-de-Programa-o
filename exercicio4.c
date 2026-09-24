#include <stdio.h>
#include <stdlib.h>
int main() {
    float Comissao, Salariofixo, totaldeVendas, SalarioFinal;
    printf("Qual o seu salario fixo? ");
    scanf("%f", &Salariofixo);
    printf("Qual o total de vendas? ");
    scanf("%f", &totaldeVendas);
    Comissao = totaldeVendas * 0.15;
    SalarioFinal = Salariofixo + Comissao;
    printf("A comissão é de: %.2f\n", Comissao);
    printf("O salário final é de: %.2f\n", SalarioFinal);
    return 0;
}