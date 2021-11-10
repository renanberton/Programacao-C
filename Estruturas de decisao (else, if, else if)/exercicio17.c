//Programa feito para calcular a área de um trapézio.
//A formula é (basemaior + basemenor) * altura
//E divide o resultado por 2
#include <stdio.h>
#include <math.h>

float basemaior, basemenor, altura, area;

int main()
{
    printf("Digite o tamanho da base maior do trapezio: \n");
    scanf("%f", &basemaior);
    getchar();
    printf("Digite o tamanho da base menor do trapezio: \n");
    scanf("%f", &basemenor);
    getchar();
    printf("Digite o tamanho da altura do trapezio: \n");
    scanf("%f", &altura);
    getchar();

    if(basemaior && basemenor >0) {
    area = ((basemaior + basemenor) * altura) /2;
    printf("A area do trapezio eh %f", area);
    }
    else {
        printf("O valor das bases devem ser maior que 0.\n");
    }
    return 0;
}