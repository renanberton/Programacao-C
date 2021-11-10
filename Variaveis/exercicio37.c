//Programa que lê o valor de um produto, e exibe o valor do produto com desconto de 12%
#include <stdio.h>
#include <math.h>

float valor, final, desconto;

int main()
{

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("\n\n");

    desconto = valor * 0.12;
    final = valor - desconto;
    printf("O valor do produto com desconto eh:  %.2f\n", final);

    return 0;
}
