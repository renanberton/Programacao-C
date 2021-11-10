//Programa que lê o volume em litros, converte e exibe o volume em metros cúbicos.
#include <stdio.h>

float mc, litros;

int main()
{

    printf("Qual o volume em litros?");
    scanf("%f", &litros);

    mc = litros / 1000;

    printf("Esse valor em litros, convertido para metros cubicos eh: %f", mc);

    return 1;
}
