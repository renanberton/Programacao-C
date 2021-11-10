//Programa que lê 3 valores, e apresenta o resultado da soma dos quadrados dos 3 numeros.
#include <stdio.h>

float numero1, numero2, numero3, media;

int main()
{

    printf("Digite o primeiro numero??");
    scanf("%f", &numero1);
    printf("Digite o segundo numero??");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero??");
    scanf("%f", &numero3);
    media = (numero1 * numero1) + (numero2 * numero2) + (numero3 * numero3);

    printf("A soma dos quadrados dos 3 numeros eh: %f", media);

    return 0;
}
