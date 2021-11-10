//Programa que lê um comprimento em Centimetros, converte e exibe o numero em polegadas.
#include <stdio.h>

float polegada, cm;

int main()
{

    printf("Qual o comprimento em centimetros?");
    scanf("%f", &cm);

    polegada = cm / 2.54;

    printf("Esse comprimento em centimetros, convertido em polegada eh: %f", polegada);

    return 1;
}
