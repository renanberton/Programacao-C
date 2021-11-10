//Programa que lê a temperatura em celsius e exibe-a em Farenheint.
#include <stdio.h>

float celsius, farenheint;

int main()
{

    printf("Qual a temperatura em Celsius?");
    scanf("%f", &celsius);

    farenheint = celsius * (9.0 / 5.0) + 32;

    printf("A temperatura em farenheint eh %f", farenheint);

    return 0;
}