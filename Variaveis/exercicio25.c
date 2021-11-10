//Programa que lê um comprimento em Acres, converte e exibe o comprimento em metros.
#include <stdio.h>

float acres, metros;

int main()
{

    printf("Qual o comprimento em acres??");
    scanf("%f", &acres);

    metros = acres * 4048.58;

    printf("Esse comprimento em acres, convertido para metros fica: %f", metros);

    return 1;
}
