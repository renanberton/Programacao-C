#include <stdio.h>

int main()
{
    //Matrizes
    char nome[3][50]; //3 colunas que suportam 3 nomes com até 50 caractares.
    for(int i=0; i<3; i++) {
        printf("Qual o seu nome? ");
        gets(nome[i]);
    }

    for (int i = 0; i < 3; i++)
    {
    printf("Ola %s\n", nome[i]); //Imprimirá as 3 posições de nome, com até 50caracteres.
    }
    
    getch();
    return 0;
}