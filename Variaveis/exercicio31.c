//Programa que lê um numero inteiro, e exibe o seu sucessor e antecessor.
#include <stdio.h>

int valor;
int ant;
int suc;

int main()
{

    printf("Digite um valor");
    scanf("%d", &valor);

    ant = valor - 1;
    suc = valor + 1;
    printf("O numero antecessor a esse valor eh: %d , e o seu sucessor eh: %d", ant, suc);

    return 0;
}
