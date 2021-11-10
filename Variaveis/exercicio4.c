//Programa que lê um numero real e exibe o quadrado do numero.
#include <stdio.h>

int numero, quadrado;

int main()
{

    printf("Digite um numero\n");
    scanf("%d", &numero);

    quadrado = numero * numero;

    printf("O quadrado de %d eh %d", numero, quadrado);

    return 0;
}