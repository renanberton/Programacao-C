//Programa feito para ler 2 numeros e mostar o maior.
//Caso os numeros forem iguais, retorna a mensagem dizendo que são iguais.
#include <stdio.h>

int numero1, numero2;

int main() {
printf("Digite um numero.");
scanf("%d", &numero1);


printf("Digite outro numero.");
scanf("%d", &numero2);

if(numero1 > numero2) {
printf("O primeiro numero eh maior.");
}else if(numero2 > numero1) {
printf("O segundo numero eh maior.");
}else {
printf("Os numeros sao iguais.");
}

getchar();

return 0;

}