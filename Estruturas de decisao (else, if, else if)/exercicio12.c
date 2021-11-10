//Programa que verifica se o numero é positivo.
//Caso for negativo, exibe-se a mensagem de que ele é negativo.
//Caso for positivo, calcula-se e exibe o logaritmo do numero.
#include <stdio.h>
#include <math.h>
double numero, soma;
int main()
{
    printf("Digite um numero: \n");
    scanf("%lf", &numero);
    getchar();
    if (numero > 0)
    {
        soma = log10(numero);
        printf("O logaritmo de %lf eh: %lf", numero, soma);
    }
    else
    {
        printf("Numero invalido, favor inserir um no. maior que 0.");
    }
    return 0;
}