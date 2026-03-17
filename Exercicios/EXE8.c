#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA QUE LEIA DOIS NÚMEROS INTEIROS E IMPRIMA NA TELA SE A SOMA DELES É: MAIOR/IGUAL A 10 OU MENOR QUE 10

int main(){

    int numero1;
    int numero2;

    printf("Digite o seu quantas pessoas tem na linha ETINERARIO: ");
    scanf("%d", &numero1);
    printf("Digite quantas pessoas tem na linha RESFRIAR: ");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;

    if(soma > 30){
        printf("LINHA PRODUTIVA");
    }else if(soma == 10){
        printf("REFAZER A LINHA E DISTRIBUICAO DE PESSOAS");
    }else{
        printf("MANDAR O DALTRO EMBORA");
    }

    return 0;

}
