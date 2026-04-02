#include <stdio.h>
#include <stdlib.h>

//FACA UM PROGRAMA QUE LEIA 2 NUMEROS INTEIROS E IMPRIMA NA TELA SE ALGUM DELES FOR PAR
//DICA -> JUNTA TODO MUNDO DENTRO DE UM ESCOPO () ASSIM VAI COMPARAR PARA RESOLVER TUDO ALI DENTRO IGUAL NA MATEMATICA COM CALCULOS DE DIV, MULTI E OUTROS QUE SEMPRE FICAM DENTRO DE PARENTESES

int main(){

    int numero1, numero2;

    printf("Informe seus numeros: ");
    scanf("%d" "%d", &numero1,&numero2);

    if((numero1 % 2 == 0) || (numero2 % 2 == 0)){
        printf("Um dos valores e par");
    }else{
        printf("Os valores sao impar");
    }

    return 0;

}
