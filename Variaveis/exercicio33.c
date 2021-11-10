//Programa que lê o tamanho de um lado do quadrado e exibe sua área.
#include <stdio.h>

float quadrado;
float soma;

int main()
{

    printf("Digite o tamanho de 1 dos lados do quadrado: ");
    scanf("%f", &quadrado);
    printf("\n\n");

    soma = quadrado * quadrado;

    printf("A soma dos lados do quadrado, que resulta na area eh: %f\n", soma);

    return 0;
}
