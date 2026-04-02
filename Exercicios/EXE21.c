#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que mostra a soma de todoso os números de 0 a 10, adicionando o valor atual de i numa variável soma, a cada repetição do laço for

int main(){

    int i = 0;
    int soma = 0;

    for(i = 0; i < 10; i++){

        //Imprime o i e pula uma linha
        printf("i = %d (Soma: %d) \n", i, soma);

        //Incrementa o valor de i na soma
        //Soma recebe -> o valor atual de soma + i
        soma = soma + i;

    }

    printf("Soma: %d", soma);

    return 0;
}
