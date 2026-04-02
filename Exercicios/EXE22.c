#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que mostre a tabuada de um número informado pelo usuário

int main(){

    int i;
    int numero;

    printf("Escolha um numero para multiplicar: ");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++){
        printf("%d x %d (Igual: %d) \n", numero, i, numero * i);
    }

    return 0;
}
