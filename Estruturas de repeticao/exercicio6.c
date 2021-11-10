#include <stdio.h>

//Programa que solicita 10 numeros ao usuário, soma os numeros e exibe na tela o resultado.

int main() {
int numero, media, soma = 0;
for (int i = 0; i < 10; i++)
{
printf("Digite um numero: ");
scanf("%d", &numero);

soma = soma + numero;
}
media = soma / 10;

printf("A media dos numeros eh: %2.d\n", media);
getch();
return 0;
}