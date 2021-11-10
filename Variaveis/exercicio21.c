//Programa que lê o peso em libras, converte e exibe o numero em Quilogramas
#include <stdio.h>

float Kg, libra;

int main()
{

    printf("Qual o peso em Libras?");
    scanf("%f", &libra);

    Kg = libra * 0.45;

    printf("Essa massa em libras, quando convertida para quilogramas, fica: %f", Kg);

    return 1;
}
