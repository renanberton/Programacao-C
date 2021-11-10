//Programa que divide o valor de um prêmio entre 3 vencedores.
//O 1o. ganha 46% do premio, o 2o. ganha 32% e o 3o. ganha 22%.
#include <stdio.h>
#include <math.h>

float premio = 780000, primeiro, segundo, terceiro;

int main()
{

    primeiro = premio * 0.46;
    segundo = premio * 0.32;
    terceiro = premio * 0.22;

    printf("O primeiro vencedor ganhara %.2f, o segundo ganhara %.2f e o terceiro ganhara %.2f\n", primeiro, segundo, terceiro);
    printf("\n\n");

    return 0;
}
