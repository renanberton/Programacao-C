#include <stdio.h>
//Estrutura de repetição
//For - Para
//Programa feito para ler 5 numeros, soma-los e exibir o resultado.
int main() {
    int numero, soma = 0; //Importante definir o valor = 0, pois a memoria pode alocar um numero aleatorio dentro de soma;

    //Int i inicia em 0;
    //Enquanto i for menor que 5;
    //Incrementa o i em 1
    for(int i = 0; i < 5; i++) {
        printf("Informe um numero: \n");
        scanf("%d", &numero);

        soma = soma + numero;
    }
    printf("A soma dos numeros eh %d", soma);
    getch();
    return 0;
}