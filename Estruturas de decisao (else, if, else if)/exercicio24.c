//Programa feito para o usuário inserir um valor, e escolher um estado.
//Cada estado possui uma taxa de imposto diference.
//MG 7%, SP 12%, RJ 15% e MS 8%.
//O usuário insere o valor e escolhe o estado
//E o programa retorna o valor do produto já com o imposto acrescido.
#include <stdio.h>
#include <math.h>

float valor, imposto;
int estado;

int main()
{
    printf("Digite o valor do produto: \n");
    scanf("%f", &valor);

    printf("Digite para qual estado o produto sera vendido: \n\n");
    printf("|1 - MG| |2 - SP| |3 - RJ| |4 - MS|\n");
    scanf("%d", &estado);

    switch (estado)
    {
    case 1:
    {
        imposto = valor * 0.07; //7%
        valor = valor + imposto;
        printf("O valor do produto em MG, com imposto eh: %2.f", valor);
        break;
    }
    case 2:
    {
        imposto = valor * 0.12; //12%
        valor = valor + imposto;
        printf("O valor do produto em SP, com imposto eh: %2.f", valor);
        break;
    }
    case 3:
    {
        imposto = valor * 0.15; //15%
        valor = valor + imposto;
        printf("O valor do produto em RJ, com imposto eh: %2.f", valor);
        break;
    }
    case 4:
    {
        imposto = valor * 0.08; //8%
        valor = valor + imposto;
        printf("O valor do produto em MS, com imposto eh: %2.f", valor);
        break;
    }
    default:
    {
        printf("O valor indicado eh invalido, favor inserir um valor valido.\n");
        break;
    }
    }
    getch();
    return 0;
}