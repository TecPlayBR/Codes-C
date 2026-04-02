#include <stdio.h>
#include <stdlib.h>

//CONECTIVOS

/*

E = Que em C é && -> USADO PARA QUANDO TODAS AS CONDIÇÕES DENTRO DO IF SEJAM VERDADEIRA E ASSIM O CÓDIGO SERÁ EXECUTADO SE TODAS CORRESPONDEREM
EXEMPLO -> SE (PESSOA1 > 17 && PESSOA2 > 17) ENTÃO OK, NESTE CASO AMBAS AS PESSOAS PRECISAM SER MAIOR DE IDADE SE UMA DELAS NÃO ATENDER A CONDIÇÃO ENTÃO O CÓDIGO JA NÃO VIA VALIDAR
// CONHECIDO COMO TABELA DA VERDADE PARA ATENDER CONDIÇÕES COMPLEXAS, MUITO UTILIZADO PARA BANCO DE DADOS, SISTEMA DE CADASTROS E ETC...


int main(){

    int pessoa1, pessoa2;

    printf("Informa a idade da pessoa 1");
    scanf("%d", &pessoa1); //Lê idade 1
    printf("Informe a idade da pessoa 2");
    scanf("%d", &pessoa2); //Lê idade 2

    //Comparações em que as duas pessoas
    //precisam ser maiores de idade

    if(pessoa1 > 17 && pessoa2 > 17){
        printf("OK");
    }else{
        printf("Requisitos não atendidos");
    }

    return 0;

}

*/

/*

OU = Pelo menos uma das condições dentro do if sejam verdadeiras, ele não será executado se todas as condições forem falsas
// PESSOA 1 OU POESSOA 2 FOR MAIOR DE IDADE ENTÃO OK, UMA DELAS É ADULTA, AGORA SE AMBAS FOREM MENOR DE IDADE, NÃO CORRESPONDE A CONDIÇÃO

*/

int main(){

    int pessoa1, pessoa2;

    printf("Informa a idade da pessoa 1: ");
    scanf("%d", &pessoa1); //Lê idade 1
    printf("Informe a idade da pessoa 2: ");
    scanf("%d", &pessoa2); //Lê idade 2

    //Comparações em que as duas pessoas
    //precisam ser maiores de idade

    if(pessoa1 > 17 || pessoa2 > 17){
        printf("OK");
    }else{
        printf("Requisitos não atendidos");
    }

    return 0;

}
