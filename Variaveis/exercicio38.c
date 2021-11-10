//Programa que lê o salário de um funcionário, e exibe o valor do salário com aumento de 25%.
#include <stdio.h>
#include <math.h>

float salario, aumento = 0.25, aumentofinal, final;

int main()
{

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    printf("\n\n");

    aumentofinal = (salario * aumento);
    final = (aumentofinal + salario);
    printf("O valor final do salario, com aumento de 25 porcento eh:  %.2f\n", final);

    return 0;
}
