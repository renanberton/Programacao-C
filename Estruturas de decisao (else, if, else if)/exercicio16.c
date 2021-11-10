//Programa usando switch, aonde lê-se um numero de 1 ao 12.
//E usando a estrutura switch, exibe-se o mês do ano correspondente ao numero.
#include <stdio.h>
#include <math.h>

int numero;

int main()
{
    printf("Digite um numero de 1 a 12: \n");
    scanf("%d", &numero);
    getchar();

    switch (numero) //Estrutura Switch Case
    {
    case 1:
        printf("Janeiro.\n");
        break;
    case 2:
        printf("Fevereiro\n");
        break;
    case 3:
        printf("Marco\n");
        break;
    case 4:
        printf("Abril\n");
        break;
    case 5:
        printf("Maio\n");
        break;
    case 6:
        printf("Junho\n");
        break;
    case 7:
        printf("Julho\n");
        break;
    case 8:
        printf("Agosto\n");
        break;
    case 9:
        printf("Setembro\n");
        break;
    case 10:
        printf("Outubro\n");
        break;
    case 11:
        printf("Novembro\n");
        break;
    case 12:
        printf("Dezembro\n");
        break;
    default:
        printf("Numero invalido, digite um valor de 1 ao 12.\n");
        //Caso o usuário digite um numero que nao seja de 1 ao 12
        //Retornara essa mensagem
    }

    return 0;
}