//Programa que lê o peso em Kilogramas, converte e exibe o peso em libras
#include <stdio.h>

float Kg, libra;

int main()
{

    printf("Qual o peso em Kilogramas?");
    scanf("%f", &Kg);

    libra = Kg / 0.45;

    printf("Essa massa em KG, quando convertida para libras, fica: %f", libra);

    return 1;
}
