#include <stdio.h>
//Programa feito para calcular e exibir os 5 primeiros multiplos de 3, maiores que 0.
int main()
{
    int numero = 3;

    for (int i = 0; i < 5; i++)
    {

        printf("Multiplos de 3:  %d\n\n", numero);
        numero = numero + 3;
    }
    getch();
    return 0;
}