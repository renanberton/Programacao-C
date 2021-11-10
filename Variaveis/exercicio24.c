//Programa que lê um comprimento em metros, converte e exibe o comprimento em jardas.
#include <stdio.h>

float acres, metros;

int main()
{

    printf("Qual o comprimento em metros?");
    scanf("%f", &metros);

    acres = metros * 0.000247;

    printf("Esse comprimento em metros, convertido para jarda fica: %f", acres);

    return 1;
}
