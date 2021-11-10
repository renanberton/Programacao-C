//Programa que converte o valor do real e do dolar.
#include <stdio.h>

float real;
float dolar;
float cotacao;

int main()
{

    printf("Qual o valor em R$?");
    scanf("%f", &real);
    printf("Qual a cotacao do dolar??");
    scanf("%f", &dolar);

    cotacao = real / dolar;

    printf("O valor convertido em dolar, sera: %f", cotacao);

    return 0;
}
