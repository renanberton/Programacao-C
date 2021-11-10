//Programa que lê um numero real e imprime a quinta parte dele.
#include <stdio.h>

int numero, quinto;
int main()
{

    printf("Digite um numero\n");
    scanf("%d", &numero);

    quinto = numero / 5;

    printf("Um quinto de %d eh %d", numero, quinto);

    return 0;
}