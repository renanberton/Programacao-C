//Programa que lê 4 notas, calcula e exibe a média aritmética.
#include <stdio.h>

float numero1, numero2, numero3, numero4, media;

int main()
{

    printf("Digite o primeiro numero??");
    scanf("%f", &numero1);
    printf("Digite o segundo numero??");
    scanf("%f", &numero2);
    printf("Digite o terceiro numero??");
    scanf("%f", &numero3);
    printf("Digite o quarto numero??");
    scanf("%f", &numero4);
    media = (numero1 + numero2 + numero3 + numero4) / 4;

    printf("A media da soma dos 4 numeros eh: %f", media);

    return 0;
}
