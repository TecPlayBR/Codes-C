#include <stdio.h>
#include <stdlib.h>

//FACA UM PROGRAMA QUE LEIA 2 NUMEROS INTEIRO E IMPRIMA NA TELA SE A SOMA DELES ESTIVER DENTRE 0 E 10 OU SE A SOMA FOR PAR

int main(){

    int numero1, numero2, soma;

    printf("Informe seus numeros: ");
    scanf("%d" "%d", &numero1,&numero2);

    soma = (numero1 + numero2);

    if((soma > 0 && soma < 10) || (soma % 2 == 0)){
        printf("A soma deu par ou esta entre 0 e 10 parabens");
    }else{
        printf("Que pena! tente novamente");
    }

    return 0;

}
