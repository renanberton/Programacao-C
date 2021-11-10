#include <stdio.h>

//Programa que lê um valor, e depois imprime os numeros inteiros e impares desse valor.

int main()
{
    int numero, impares;

    while (1)
    {
        printf("Insira um numero natural: ");
        scanf("%d", &numero);
        if (numero >= 0)
        {
            break;
        }
    }

    for (int i = 0; i <= numero; i++)
    {
        if (i % 2 == 1)
        {
            impares = i;
            printf("Numero impar: %d\n", impares);
        }
    }
    getch();
    return 0;
}