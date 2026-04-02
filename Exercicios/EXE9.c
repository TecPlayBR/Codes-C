#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA QUE LEIA DOIS NÚMEROS INTEIROS E IMPRIMA NA TELA QUAL É O MAIOR DELES OU SE SÃO IGUAIS

int main(){

    int numero1, numero2;

    printf("Digite o seu primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o seu segundo numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        printf("O primeiro valor é maior que o segundo");
    }else if(numero1 < numero2){
        printf("O segundo valor é maior que o primeiro");
    }else{
        printf("Os valores são iguais");
    }

    return 0;

}
