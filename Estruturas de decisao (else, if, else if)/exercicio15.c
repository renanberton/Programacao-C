//Programa usando switch, aonde lê-se um numero de 1 ao 7.
//E usando a estrutura switch, exibe-se o dia da semana correspondente ao numero.
#include <stdio.h>
#include <math.h>

int numero;

int main()
{
    printf("Digite um numero de 1 a 7: \n");
    scanf("%d", &numero);
    getchar();

    switch(numero)
    {
    case 1:
        printf("Domingo.\n");
        break;
    case 2:
        printf("Segunda-feira\n");
        break;
    case 3:
        printf("Terca-feira\n");
        break;
    case 4:
        printf("Quarta-feira\n");
        break;
    case 5:
        printf("Quinta-feira\n");
        break;
    case 6:
        printf("Sexta-feira\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Numero invalido, digite um valor de 1 a 7.\n");
    }

    return 0;
}