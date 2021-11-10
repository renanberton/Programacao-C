//Programa que exibe o alfabeto, passando a variavel char e o numeri respectivo na tabela ASCI.
#include <stdio.h>

int main() {

    for(int i = 65; i < 90; i++) {
        printf("%c\n", i);
    }
    getchar();
    return 0;
}