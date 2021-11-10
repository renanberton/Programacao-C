//Programa que lê um comprimento em polegadas, converte e exibe o numero em Centimetros
#include <stdio.h>

float polegada, cm;

int main()
{

    printf("Qual o comprimento em polegadas?");
    scanf("%f", &polegada);

    cm = polegada * 2.54;

    printf("Esse comprimento em polegadas, convertido em cm eh: %f", cm);

    return 1;
}
