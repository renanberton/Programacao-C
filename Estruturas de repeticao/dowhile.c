#include <stdio.h>
//Estrutura de repetição
//Do..while - Faça.. Enquanto
int main()
{
    int numero, soma = 0; //Importante definir o 0

    printf("Informe um numero. \n");
    scanf("%d", &numero);

    do
    {
        soma = soma + numero;
        printf("Informe um numero. \n");
        scanf("%d", &numero);
    } while (numero != 0);

    printf("A soma dos numeros eh: %d\n", soma);

    getch();
    return 0;
}