#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA QUE LEIA DOIS NÚMEROS INTEIROS E IMPRIMA NA TELA O RESULTADO DIVISÃO DELES.

int main(){

    int valor1;
    int valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    //Use / para efetuar a divisão é possível usar float, porém a divisão sempre é exata, não se esqueça oque aprendeu na escola
    int resultado = valor1 / valor2;
    printf("Resultado da divisão: %d", resultado);
    return 0;
}
