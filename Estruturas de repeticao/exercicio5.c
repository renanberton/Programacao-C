#include <stdio.h>

//Programa que solicita 10 numeros ao usuário, soma os numeros e exibe na tela o resultado.

int main() {
float numero, soma = 0;
for (int i = 0; i < 10; i++)
{
printf("Digite um numero: ");
scanf("%f", &numero);
soma = soma + numero;
}

printf("A soma dos numeros eh: %2.f\n", soma);
getch();
return 0;
}