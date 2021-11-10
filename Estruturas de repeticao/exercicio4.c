#include <stdio.h>
//Programa feito para realizar uma contagem de 1000 em 1000, até chegar em 100.000
int main() {

int i = 0;
    while (i <= 100000)
    {
    printf("%d\n\n", i);
    i = i + 1000;
    }
    return 0;
}