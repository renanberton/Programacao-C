//Programa que lê a altura e o raio de um cilindro circular, calcula e exibe o valor do volume do cilindro.
#include <stdio.h>
#include <math.h>

float altura, raio, volume, pi = 3.141592;

int main()
{

    printf("Digite a altura do cilindro circular");
    scanf("%f", &altura);
    printf("\n\n");

    printf("Digite o raio do cilidro circular");
    scanf("%f", &raio);
    printf("\n\n");

    volume = (raio * raio) * pi * altura;

    printf("O volume do cilindro eh:  %f\n", volume);

    return 0;
}
