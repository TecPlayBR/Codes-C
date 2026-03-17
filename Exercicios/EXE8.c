#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA QUE LEIA DOIS N�MEROS INTEIROS E IMPRIMA NA TELA SE A SOMA DELES FOR MAIOR/IGUAL A 10 OU MENOR QUE 10

int main(){

    int numero1;
    int numero2;

    printf("Digite o seu primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o seu segundo numero: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;

    if(soma > 10){
        printf("Soma maior ou igual a 10");
    }else{
        printf("Soma menor que 10");
    }

    return 0;

}
