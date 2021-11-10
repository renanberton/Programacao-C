//Programa que lê um numero de radiano, converte e exibe-o em graus.
#include <stdio.h>

float grau, radiano, pi = 3.14;

int main()
{

    printf("Qual o numero em radiano?");
    scanf("%f", &radiano);

    grau = radiano * 180 / pi;

    printf("O radiano convertido para grau eh: %f", grau);

    return 1;
}
