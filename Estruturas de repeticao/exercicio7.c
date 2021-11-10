#include <stdio.h>

//Programa que solicita 10 numeros ao usuário, soma somente os numeros positivos e exibe na tela o resultado.

int main()
{
    int numero, media, soma = 0, div = 10;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);
        if (numero > 0)
        {
            soma = soma + numero;
        }
        else
        {
            div = div - 1;
        }
    }
    media = soma / div;

    printf("A media dos numeros eh: %2.d\n", media);
    getch();
    return 0;
}