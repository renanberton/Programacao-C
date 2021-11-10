//Programa que lê um comprimento em metros, converte e exibe o comprimento em jardas.
#include <stdio.h>

float jardas, metros;

int main()
{

    printf("Qual o comprimento em metros?");
    scanf("%f", &metros);

    jardas = metros / 0.91;

    printf("Esse comprimento em metros, convertido para jardas fica: %f", jardas);

    return 1;
}
