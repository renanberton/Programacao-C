//Programa feito para ler um numero inteiro.
//E verificar se é par ou impar.
#include <stdio.h>
#include <math.h>

int numero;

int main()
{
    printf("Digite um numero.");
    scanf("%d", &numero);

    if ((numero % 2) == 0 )
    {
        printf("O numero eh par.\n");
    }else
    {
        printf("O numero eh impar.\n");
    }
    getchar();
    return 0;
}