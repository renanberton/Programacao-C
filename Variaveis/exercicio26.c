//Programa que lê um comprimento em metros, converte e exibe o comprimento em hectares.
#include <stdio.h>

float hectares, metros;

int main()
{

    printf("Qual o comprimento em metros??");
    scanf("%f", &metros);

    hectares = metros * 0.0001;

    printf("Esse comprimento em metros, convertido para hectares fica: %f", hectares);

    return 1;
}
