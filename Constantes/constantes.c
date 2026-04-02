#include <stdio.h>
#include <stdlib.h>

#define CONSTANTE 5
#define QUEBRADO 9.3
#define LETRA 'A'

//CONSTANTES

//Constante elas apenas seguem não variavam, é importante usar no cabeçalho como #DEFINE, de preferência sempre use maisculas por boa prática

int main(){

    //Definido uma constante dentro da
    //função main

    const int LADO = 10;

    //Imprimindo as constantes
    printf("%d \n", CONSTANTE);
    printf("%f \n", QUEBRADO);
    printf("%c \n", LETRA);
    printf("%d \n", LADO);

    return 0;
}
