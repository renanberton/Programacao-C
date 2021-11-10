//Programa que lê um numero inteiro, e exibe a soma do sucessor de seu triplo com o antecessor de seu dobro.
#include <stdio.h>

int numerointeiro, suc, ant, soma;

int main()
{

    printf("Digite um numero inteiro: ");
    scanf("%d", &numerointeiro);
    printf("\n\n");

    suc = (numerointeiro * 3) + 1;
    ant = (numerointeiro * 2) - 1;
    soma = suc + ant;
    printf("A soma do sucessor de seu triplo, com o antecessor do seu dobro eh: %d", soma);

    return 0;
}
