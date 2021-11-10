#include <stdio.h>
//Programa feito para contar e exibir de 1 ate 100 de 1 em 1, 3 vezes.
//A 1ª usando o FOR, a 2ª usando o WHILE e a 3ª usando o DO..WHILE
int main()
{

    for (int i = 1; i < 101; i++)
    {

        printf(" %d\n\n", i);
    }

    int i = 1;
    while (i < 101)
    {
        printf("%d\n\n", i);
        i = i + 1;
    }

    int o = 1;
    do
    {
        printf("%d\n\n", o);
        o = o + 1;
    } while (o < 101);

    return 0;
}