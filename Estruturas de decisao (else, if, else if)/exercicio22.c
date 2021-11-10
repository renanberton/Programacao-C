//Programa para verificar se o cidadão tem direito a aposentadoria.
//Para ter direito a aposentadoria (nesse exercício), o cidadão deve:
//Ter pelo menos 65 anos, ou ter trabalhado por 30 anos,
// ou ter pelo menos 60 anos e ter trabalhado pelo menos 25 anos.
#include <stdio.h>
#include <math.h>

float idade, tempo;

int main()
{
    printf("Digite a sua idade: \n\n");
    scanf("%f", &idade);

    printf("Digite quantos anos voce trabalhou: \n\n");
    scanf("%f", &tempo);

    if (idade>= 65 || tempo>=30) {
        printf("Voce pode se aposentar.\n");
    }
    else if (idade >=60 && tempo >=25) {
        printf("Voce pode se aposentar.\n");
    }
    else {
        printf("Voce nao tem direito a aposentadoria.\n");
    }

    return 0;
}