#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA QUE LEIA UM NÚMERO INTEIRO E INFORME SE ELE É PAR OU NÃO (PESQUISAR SOBRE A OPERAÇÃO RESTO DE DIVISÃO QUE É O %)

int main(){

    int numero1;
    int divisor = 2; // OPCIONAL PODE USAR DIRETAMENTE DENTRO DO IF SEM INICIALIZAR UMA VARIÁVEL

    printf("Informe seu numero: ");
    scanf("%d", &numero1);

    if(numero1 % divisor == 0){
        printf("Numero e par");
    }else{
        printf("Numero e impar");
    }

    return 0;

}
