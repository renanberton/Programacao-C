//Programa que lê a velocidade em Kilometros por hora e exibe a velocidade em metros por segundo.
#include <stdio.h>

float kmh, ms;

int main()
{

    printf("Qual a velocidade em kms/h?");
    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("A velocidade em M/S eh %f", ms);

    return 0;
}