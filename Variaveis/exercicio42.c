//Programa que recebe o salário base de um funcionário.
//Calcula o salário tendo um aumento de 5% e um desconto de 7% e exibe-o.
#include <stdio.h>
#include <math.h>

float salariobase, horas;

int main()
{

    printf("Quanto eh o seu salario base?");
    scanf("%f", &salariobase);
    printf("\n\n");

    float aumento = salariobase * 0.05;
    float total = salariobase + aumento;
    float subfinal = total * 0.07;
    float final = total - subfinal;

    printf("O valor a ser recebido com aumento de dez por cento eh %.2f", final);

    return 0;
}
