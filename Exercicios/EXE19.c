#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que imprima os números pares de 10 até um número informado pelo usuário

int main(){

    int i;
    int valor;

    printf("Informe o seu número:\n");
    scanf("%d", &valor);

    i = 10;

    while (i <= valor){
        printf("%d \n", i);
        i += 2;
    }

    return 0;
}
