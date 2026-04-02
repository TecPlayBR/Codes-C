#include <stdio.h>
#include <stdlib.h>

//FA;A UM PROGRAMA QUE LEIA UM NUMERO INTEIRO E IMPRIMA NA TELA SE ELE ESTA ENTRE 0 E 10

int main(){

    int numero;

    printf("Informe seu numero: ");
    scanf("%d", &numero);

    if(numero > 0 && numero < 10){
        printf("Esta entre os valores de 0 e 10");
    }else{
        printf("O seu numero e maior que 10");
    }

    return 0;

}
