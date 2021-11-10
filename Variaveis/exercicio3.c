//Programa que solicita 3 numeros e exibe a soma deles.
#include <stdio.h>

int numero1, numero2, numero3, soma;

int main()
{

    printf("Digite o primeiro numero\n");
    scanf("%d", &numero1);

    printf("Digite o primeiro numero\n");
    scanf("%d", &numero2);

    printf("Digite o primeiro numero\n");
    scanf("%d", &numero3);

    soma = numero1 + numero2 + numero3;

    printf("A soma dos 3 numeros eh :%d", soma);

    return 0;
}