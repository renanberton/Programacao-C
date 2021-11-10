//Programa que lê o valor da hora trabalhada, quantas horas foram trabalhadas
//E exibe o valor a ser pago ao funcionário, adicionando 10% ao valor.
#include <stdio.h>
#include <math.h>

float porhora, horas, irpf = 0.10;

int main()
{
    printf("Quanto voce ganha por hora? ");
    scanf("%f", &porhora);

    printf("Quantas horas voce trabalhou no mes? ");
    scanf("%f", &horas);

    printf("\n\n");

    float semaumento = porhora * horas;
    float aumento = semaumento * irpf;
    float total = semaumento + aumento;

    printf("O valor a ser recebido com aumento de dez por cento eh %.2f", total);

    return 0;
}
