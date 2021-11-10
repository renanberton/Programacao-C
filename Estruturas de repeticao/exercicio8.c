#include <stdio.h>

//Programa que solicita 10 numeros ao usuário, e exibe o maior e o menor numero digitado.

int main()
{
    int numero,
    maior = 1,
    menor = 1;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);
        if (numero > maior && numero > menor)
        {
            maior = numero;
        }

        else
        {
            menor = numero;
        }
    }
    printf("O numero maior eh: %d.\nO numero menor eh: %d", maior, menor);
    getch();
    return 0;
}