#include <stdio.h>
#include <stdlib.h>

//FACA UM PROGRAMA QUE LEIA 2 NUMEROS INTEIROS E IMPRIMA NA TELA SE ALGUM DELES FOR MAIOR QUE 10

int main(){

    int numero1, numero2;

    printf("Informe seus numeros: ");
    scanf("%d" "%d", &numero1,&numero2);

    if(numero1 > 10 || numero2 > 10){
        printf("Um dos valores e maior que 10");
    }else{
        printf("Nenhuma valor e maior que 10");
    }

    return 0;

}
