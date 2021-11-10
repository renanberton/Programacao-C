//Programa feito para ler um numero real.
//Caso o numero for positivo, ele imprime a raiz quadrada.
//Caso o numero for negativo, ele imprime o quadrado do numero.
#include <stdio.h>
#include <math.h>

float numero. quadrada, quadrado;

int main() {
printf("Digite um numero.");
scanf("%f", &numero);

if(numero > 0) {
quadrada = sqrt(numero);
    printf("O numero eh positivo, e sua raiz quadrada eh: %f", quadrada);
}else{
quadrado = numero * numero;
    printf("Esse numero ao quadrado eh: %f", quadrado);
}
getchar();
return 0;

}