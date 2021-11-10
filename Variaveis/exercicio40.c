//Programa que solicita o numero de dias trabalhados, e calcula quanto será a quantia a ser recebida, já sendo descontado 8%.
#include <stdio.h>
#include <math.h>

float pordia = 30, dia, irpf = 0.08;

int main()
{

    printf("Quantos dias voce trabalhou no mes? ");
    scanf("%f", &dia);
    printf("\n\n");

    float semdesc = pordia * dia;
    float desconto = semdesc * irpf;
    float total = semdesc - desconto;

    printf("O valor a ser recebido com desconto de 8 por cento eh %.2f", total);

    return 0;
}
