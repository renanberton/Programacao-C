//Programa feito para verificar se o numero e positivo.
//Quando é positivo, calcula-se a raiz quadrada do numero.
//Quando é negativo, retorna a mensagem dizendo que o numero é invalido.
#include <stdio.h>
int numero, quadrada;

int main() {
printf("Digite um numero.");
scanf("%d", &numero);

if(numero > 0) {
quadrada = numero * numero;
printf("O numero eh positivo, e sua raiz quadrada eh: %d", quadrada);
}else{
    printf("O numero e negativo, portanto invalido.");
}
getchar();
return 0;

}