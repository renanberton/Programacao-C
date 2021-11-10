//Programa para ler o salário de um trabalhador e o valor de uma prestação.
//Caso o valor da prestação for maior que o salário, exibe-se Emprestimo negado.
#include <stdio.h>

float salario, prestacao, diferenca;

int main()
{
    printf("Digite o seu salario: \n");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao: \n");
    scanf("%f", &prestacao);

diferenca = salario * 0.20;
    if (prestacao > diferenca) 
    {
        printf("Emprestimo negado.");
    }
    else
    {
        printf("Emprestimo condedido.");
    }

    getch();

    return 0;
}