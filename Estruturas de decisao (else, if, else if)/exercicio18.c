//Programa que exibe 4 opções para o usuário.
//Cada opção é uma operação matemática.
//De acordo com a opção escolhida o programa solicita 2 numeros.
//E escolhida a operação, ele realiza a operação escolhida entre os numeros.
#include <stdio.h>
#include <math.h>

int escolha;
float numero1, numero2, resultado;

int main()
{
    printf("Escolha uma das opcoes matematicas: \n\n");
    printf("Adicao - 1\n");
    printf("Subtracao - 2\n");
    printf("Divisao - 3\n");
    printf("Multiplicacao - 4\n");
    scanf("%d", &escolha);
    getchar();

    switch (escolha)
    {
    case 1: {
        printf("Digite um numero");
        scanf("%f", &numero1);
        printf("Digite outro numero");
        scanf("%f", &numero2);
        resultado = numero1 + numero2;
        printf("O resultado da adicao dos 2 numeros eh %f", resultado);
        getchar();
    break;
    }
    case 2: {
        printf("Digite um numero");
        scanf("%f", &numero1);
        printf("Digite outro numero");
        scanf("%f", &numero2);
        resultado = numero1 - numero2;
        printf("O resultado da subtracao dos 2 numeros eh %f", resultado);
        getchar();
    break;
    }
    case 3: {
        printf("Digite um numero");
        scanf("%f", &numero1);
        printf("Digite outro numero");
        scanf("%f", &numero2);
        resultado = numero1 / numero2;
        printf("O resultado da divisao dos 2 numeros eh %f", resultado);
        getchar();
    break;
    }    
    case 4: {
        printf("Digite um numero");
        scanf("%f", &numero1);
        printf("Digite outro numero");
        scanf("%f", &numero2);
        resultado = numero1 * numero2;
        printf("O resultado da multiplicacao dos 2 numeros eh %f", resultado);
        getchar();
    }
    default: {
        printf("Numero digitado invalido, favor inserir numero corretamente");
    }
    break;
    }

    return 0;
}