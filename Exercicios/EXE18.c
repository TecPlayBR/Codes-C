#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que imprima de 50 até 0, diminuindo de 6 em 6

int main(){

    int i = 50;

    while (i >= 0){

        printf("%d \n", i);


        i -= 6;

    }

    return 0;

}
