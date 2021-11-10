//Programa para calcular a media ponderada de 3 notas.
//Onde a 1ª e a 2ª tem peso 1 e a 3ª tem peso 2.
//Também verifica se a nota do aluno é maior que 60.
//Caso for maior que 60 exibe-se que o aluno foi aprovado.
//CAso for menor que 60 exibe-se que o aluno foi reprovado.
#include <stdio.h>
#include <math.h>

float nota1, nota2, nota3, media, pond;
float peso1 = 1;
float peso2 = 2;

int main()
{
    printf("Digite sua primeira nota: \n");
        scanf("%f", &nota1);
    getchar();
    printf("Digite sua segunda nota: \n");
        scanf("%f", &nota2);
    getchar();
    printf("Digite sua terceira nota: \n");
        scanf("%f", &nota3);
    getchar();

    media = peso1 * nota1 + peso1 * nota2 + peso2 * nota3;
    pond = media / (peso1 + peso1 + peso2);

    if (pond >= 60) {
        printf("Voce foi aprovado, sua nota eh %f", pond);
    }
    else {
        printf("Voce esta reprovado, sua nota eh %f", pond);
    }

    return 0;
}