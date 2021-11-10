//Programa que lê a temperatura em Celsius, e a exibe em Kelvin
#include <stdio.h>

float celsius, kelvin;

int main()
{

    printf("Qual a temperatura em Celsius?");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("A temperatura em Kelvin eh %f", kelvin);

    return 0;
}