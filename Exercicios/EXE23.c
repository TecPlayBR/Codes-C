#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa em que o usuário informe valor inicial, valor final e de quanto em quanto o valor de i será modificado e imprima todos os valores no intervalo informado com os passos informados

int main(){

    int inicial, final, passo, i;

    printf("Informe o valor inicial: ");
    scanf("%d", &inicial);

    printf("Informe o valor final: ");
    scanf("%d", &final);

    printf("Informe o passo: ");
    scanf("%d", &passo);

    for(i = inicial; i <= final; i += passo){
        printf("%d\n", i);
    }

    return 0;
}
