//Programa que lê um volume em metros cúbicos, converte e exibe o volume em litros.
#include <stdio.h>

float mc;
float litros;

int main()
{

    printf("Qual o volume em metros cubicos?");
    scanf("%f", &mc);

    litros = 1000 * mc;

    printf("Esse valor em metros cubicos, convertido para Litros eh: %f", litros);

    return 1;
}
