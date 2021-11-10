//Programa que lê um comprimento em hectares, converte e exibe o comprimento em metros.
#include <stdio.h>

float hectares, metros;

int main()
{
    printf("Qual o comprimento em hectares??");
    scanf("%f", &hectares);

    metros = hectares * 10000;

    printf("Esse comprimento em hectares, convertido para metros fica: %f", metros);

    return 0;
}
