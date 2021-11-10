//Programa que lê a temperatura em Farenheint e exibe em Celsius
#include <stdio.h>

float celsius, farenheint;

int main()
{

    printf("Qual a temperatura em Farenheint?");
    scanf("%f", &farenheint);

    celsius = 5 * (farenheint - 32.0) / 9;

    printf("A temperatura em celsius eh %f", celsius);

    return 0;
}