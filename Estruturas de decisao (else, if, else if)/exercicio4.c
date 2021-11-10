//Programa feito para verificar se o numero é positivo.
//Quando o numero é positivo, imprime-se o numero ao quadrado e sua raiz quadrada.
#include <stdio.h>
#include <math.h>

float numero, quadrada, quadrado;

int main() {
printf("Digite um numero.");
scanf("%f", &numero);

if(numero > 0) {
quadrada = sqrt(numero);
quadrado = numero * numero;
    printf("O numero eh positivo, e sua raiz quadrada eh: %f\n", quadrada);
    printf("O numero e positivo, e ele ao quadrado eh: %f\n", quadrado);
}
getchar();
return 0;

}