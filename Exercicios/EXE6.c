#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA QUE LEIA DOIS NÚMEROS QUEBRADOS E IMPRIMA NA TELA O RESULTADO DA MULTIPLICAÇÃO DELES

int main(){

    float valor1;
    float valor2;

    printf("Insira o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Insira o segundo valor: ");
    scanf("%f", &valor2);

    float resultado = valor1 * valor2;
    printf("O resultado da multiplicação é: %.2f", resultado);
    return 0;
}
