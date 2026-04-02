#include <stdio.h>
#include <stdlib.h>

//FACA UM PROGRAMA QUE LEIA 3 NUMEROS INTEIROS E IMPRIMA NA TELA SE OS 3 SAO MAIORES QUE 10

//OPCIONAL E BONUS -> else if (numero1 == 10 && numero2 == 10 && numero3 == 10);{} printf("Todos os numeros sao 10");

int main(){

    int numero1, numero2, numero3;

    printf("Informe seu primeiro numero: ");
    scanf("%d", &numero1);
    printf("Informe seu segundo numero: ");
    scanf("%d", &numero2);
    printf("Informe seu terceiro numero: ");
    scanf("%d", &numero3);

    if(numero1 > 10 && numero2 > 10 && numero3 > 10){
        printf("Os valores sao maiores que 10");
    }else{
        printf("Algum dos numeros nao sao maior que 10");
    }

    return 0;

}
