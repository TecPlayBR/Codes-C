#include <stdio.h>
#include <stdlib.h>

int retorna10(){
    int a = 10;
    return a;
}

float retornaQuebrado(){
    float a = 5.5;
    return a;
}

char retornaLetra(){
    return 'a';
}

int main(){

    // Função direto no printf
    printf("Retorna 10 da funcao: %d\n", retorna10());

    // Função retornando valor para uma variável
    float numeroQuebrado = retornaQuebrado();
    printf("Numero quebrado: %f\n", numeroQuebrado);

    // Retornando direto no printf
    printf("Retorna Letra: %c\n", retornaLetra());

    return 0;
}
