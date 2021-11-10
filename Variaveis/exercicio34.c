//Programa que lê o valor do raio de um círculo, calcula e exibe a área do circulo.
#include <stdio.h>

float raio, circulo, pi;

int main()
{

    printf("Digite o valor do raio da circulo: ");
    scanf("%f", &raio);
    printf("\n\n");

    circulo = (raio * raio) * pi;

    printf("A área correspondente do circulo eh %f\n", circulo);

    return 0;
}
