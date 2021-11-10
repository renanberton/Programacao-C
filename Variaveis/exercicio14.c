//Programa que lê um angulo em graus, e exibe-o convertido para radianos.
#include <stdio.h>

float grau, radiano, pi = 3.14;

int main()
{

    printf("Qual o numero do grau?");
    scanf("%f", &grau);

    radiano = grau * pi / 180;

    printf("O grau convertido para radiano eh: %f", radiano);

    return 1;
}
