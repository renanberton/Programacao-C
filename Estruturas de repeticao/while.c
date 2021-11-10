#include <stdio.h>
//Estrutura de repetição
//While - Enquanto
//Programa feito para receber numeros, soma-los e exibilos.
//O programa repete até o numero informado for 0
int main()
{
    int numero, soma = 0; //Importante definir o 0

    printf("Informe um numero. \n");
    scanf("%d", &numero);

    while (numero != 0)
    {
        soma = soma + numero;
        printf("Informe um numero. \n");
        scanf("%d", &numero);
    }

    printf("A soma eh %d", soma);
    getch();
    return 0;
}