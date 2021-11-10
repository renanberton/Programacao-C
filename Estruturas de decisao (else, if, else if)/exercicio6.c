//Programa feito para ler 2 numeros inteiros.
//E mostrar qual deles é o maior, e a diferença entre eles.
#include <stdio.h>
#include <math.h>

int numero1, numero2;

int main(){

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);
    printf("\n");

    printf("Digite outro numero inteiro: ");
    scanf("%d", &numero2);
    printf("\n");

    if(numero1 > numero2) {
        printf("O 1o. numero eh maior\n");
        printf("Com a diferenca de %d\n\n", (numero1-numero2));
    }else {
        printf("O 2o. numero eh maior.\n");
        printf("A diferenca eh %d\n\n", (numero2-numero1));
    }

    getch();
    return 0;
}