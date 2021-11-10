//Programa que recebe os valores de a e b, calcula e exibe o valor da hipotenusa.
#include <stdio.h>
#include <math.h>

float a, b, hipo;

int main()
{

    printf("Digite o valor do a");
    scanf("%f", &a);
    printf("\n\n");

    printf("Digite o valor do b");
    scanf("%f", &b);
    printf("\n\n");

    hipo = sqrt(a * a + b * b);

    printf("O resultado da operacao eh:  %f\n", hipo);

    return 0;
}
