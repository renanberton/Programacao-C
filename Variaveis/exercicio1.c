//Programa que lê um numero e exibe-o.
#include <stdio.h>

int main()
{

    int idade; //declaração de idade em numero inteiro

    printf("Qual eh a sua idade?\n");

    scanf("%d", &idade);

    printf("A sua idade eh %d", idade);

    getch();
    return 0;
}