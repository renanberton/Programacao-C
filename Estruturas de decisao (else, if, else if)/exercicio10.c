//Programa que recebe a altura e o sexo do usuário.
//E exibe o peso ideal, de acordo com a altura e sexo do usuário.
#include <stdio.h>

float altura, pesoideal;
char sexo;

int main()
{
    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    getchar();
    printf("Digite seu sexo H ou M: \n");
    scanf("%c", &sexo);
    getchar();
    if (sexo == 'H')
    {
        pesoideal = (72.7 * altura) - 58;
        printf("O seu peso ideal eh: %f", pesoideal);
    }
    else if (sexo == 'M')
    {
        pesoideal = (62.1 * altura) - 44.7;
        printf("O seu peso ideal eh: %f", pesoideal);
    }
    else
    {
        printf("Valor inserido invalido, favor inserir H ou M");
    }
    return 0;
}