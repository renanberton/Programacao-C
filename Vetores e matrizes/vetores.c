#include <stdio.h>

int main()
{
    //Valores e Strings
    char nome[50];
    printf("Qual o seu nome? ");
    gets(nome);
    printf("Ola %s", nome);

    //Vetores e Caracteres
    char letras[26];
    int contador = 0;
    for (int i = 97; i <= 122; i++) //char 97 é o inicio do alfabeto na tabela asci, até o Z que é 122;
    {
        letras[contador] = i;
        contador = contador + 1;
    }
    return 0;
}