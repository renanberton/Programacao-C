//Programa que lê a velocidade em Kilometros por hora, converte e exibe a velocidade em milhas.
#include <stdio.h>

float kmh, milhas;

int main()
{

    printf("Qual a velocidade em km/h?");
    scanf("%f", &kmh);

    milhas = kmh / 1.61;

    printf("A velocidade em milhas eh %f", milhas);

    return 0;
}
