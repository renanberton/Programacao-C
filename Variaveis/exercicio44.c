//Programa que lê o tamanho do degrau, e a altura da escada.
//Calcula e exibe quantos degraus faltam para chegar ao final da escada.
#include <stdio.h>
#include <math.h>

float degrau, escada;

int main()
{

    printf("Qual a altura de degrau? ");
    scanf("%f", &degrau);
    printf("\n\n");

    printf("Qual a altura que deseja alcancar? ");
    scanf("%f", &escada);
    printf("\n\n");
    float total = escada - degrau;

    printf("Faltam  %.2f degraus", total);
    getch();
    return 0;
}
