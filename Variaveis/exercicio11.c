//Programa que lê a velocidade em Metros por segundo, e depois exibe a velocidade em Kilometros por hora.
#include <stdio.h>

float kmh, ms;

int main()
{

    printf("Qual a velocidade em metros/s?");
    scanf("%f", &ms);

    kmh = ms * 3.6;

    printf("A velocidade em km/h eh %f", kmh);

    return 0;
}