//Programa que lê o comprimento em jardas, converte e exibe o comprimento em metros.
#include <stdio.h>

float jardas, metros;

int main()
{

    printf("Qual o comprimento em Jardas?");
    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("Esse comprimento em jardas, convertido para metros fica: %f", metros);

    return 1;
}
