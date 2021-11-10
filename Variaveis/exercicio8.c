//Programa que lê a temperatura em Kelvin, e a exibe em Celsius
#include <stdio.h>

float celsius, kelvin;

int main()
{

    printf("Qual a temperatura em Kelvin?");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("A temperatura em celsius eh %f", celsius);

    return 0;
}