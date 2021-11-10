//Programa feito para calcular a média de consumo de gasolina.
#include <stdio.h>
#include <math.h>

float valor, gasto, kmrodado, gasolina, litros, total;

int main()
{
    printf("Quanto voce colocou de gasolina? \n");
    scanf("%f", &gasto);

    printf("Qual o valor da gasolina? \n");
    scanf("%f", &gasolina);

    printf("Quantos quilometros voce rodou?\n");
    scanf("%f", &kmrodado);
    getch();

    litros = gasto / gasolina;
    total = kmrodado / litros;

    printf("A Media de consumo foi: %2.f\n", total);    
    return 0;

}