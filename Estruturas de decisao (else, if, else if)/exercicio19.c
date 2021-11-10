//Programa para verificar se um numero digitado pelo usuário.
//É divisivel por 3 ou por 5.
#include <stdio.h>
#include <math.h>

int numero, verificacao;

int main()
{
    printf("Digite um numero: \n\n");
    scanf("%d", &numero);

    if (numero % 3 == 0)
    {
        printf("O numero eh divisivel por 3.\n");
    }
    else if (numero % 5 == 0)
    {
        printf("O numero eh divisivel por 5.\n");
    }
    else
    {
        printf("O numero nao e divisivel nem por 5 nem por 3.\n");
    }
    getchar();

    return 0;
}