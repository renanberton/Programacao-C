//Programa feito para ler a nota de 2 alunos.
//Verifica se as notas são validas(0 a 10)
//Caso as notas sejam validas, exibe-se a media das 2 notas.
#include <stdio.h>

int nota1, prestacao, media;

int main()
{
    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &prestacao);

    if (nota1 > 0 && nota1 <= 10 && prestacao > 0 && prestacao <= 10) //Se a nota 1 e 2 forem > que 0 e menor ou igual a 10.

    {
        media = (nota1 + prestacao) / 2;
        printf("A nota eh valida, e sua media eh: %.2f\n", media);
    }
    else
    {
        printf("A nota nao eh valida, favor inserir uma nota entre 0 e 10.");
    }

    getchar();

    return 0;
}