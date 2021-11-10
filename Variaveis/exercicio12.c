//Programa que lê a velocidade em milhas, converte e exibe a velocidade em Kilometros por hora.
#include <stdio.h>

float kmh, milhas;

int main()
{

    printf("Qual a velocidade em milhas?");
    scanf("%f", &milhas);

    kmh = 1.61 * milhas;

    printf("A velocidade em km/h eh %f", kmh);

    return 0;
}
