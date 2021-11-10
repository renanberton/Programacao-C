#include <stdio.h>

int main() {
    int idade;
    printf("Qual eh a sua idade?");
    scanf("%d", &idade);


    if(idade < 18){ 
    printf("Voce eh menor de idade");
    }else if(idade >= 18 && idade <60){
    printf("Voce eh adulto");
    }else {
        printf("voce eh idoso.");
    }

    getchar();

    return 0;
}