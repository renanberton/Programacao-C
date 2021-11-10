#include <stdio.h>

int main(){
    //Vetor de Inteiro
    int numeros[10]; //Primeiro elemento é 0, e o ultimo é 9 = N-1;
    numeros[0] = 1; //Valores atribuidos manualmente para dentro
    numeros[1] = 3; // das posições dos vetores [].
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9;


    //Vetores de Reais
    float valores[5]; //0..4;
        for(int i = 0; i < 5; i++) { 
            valores[i] = (float)numeros[i] / (float)2; //Valores recebem na posição i, que começa com 0 e recebe os numeros da posição i / 2
        }                                           

    //Loop for para imprimir os valores já atribuidos nas posições de valores.
    for(int i = 4; i>= 0; i--) {
        printf("%f\n", valores[i]);
    }
    return 0;
}