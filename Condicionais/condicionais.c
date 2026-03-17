#include <stdio.h>
#include <stdlib.h>

//RESPONSÁVEIS POR DEFINIR CONDIÇÕES COMO SE ISSO FOR VERDADE ENTÃO X É Y SE ISSO FOR FALSO ENTÃO Y É ISSO

/*OPERADORES LÓGICOS DE USO*/
/*

==
>
<
>=
<=

*/

/*DICA*/
//O = NA PROGRAMAÇÃO PEGA O VALOR QUE FOR INSERIDO NA DIREITA E JOGUE PARA ESQUERDA OU SEJA VAR = ? É O MESMO QUE ? = VAR


//EXEMPLO PRÁTICO 1
/*
int main(){

    int idade;
    printf("Digite a sua idade: "); //jOPCIONAL -> SERVE APENAS PARA O USUÁRIO SABER OQUE FAZER NA TELA DO PROMPT
    scanf("%d", &idade);

    if(idade > 17){
        printf("Maior de Idade");
    }else{
        printf("Menor de Idade");
    }

    return 0;

}
*/

//EXEMPLO PRÁTICO 2

int main(){

    int idade;
    printf("Digite a sua idade: ");

    scanf("%d", &idade);

    if(idade <17){
        printf("Menor de Idade");
    }else if(idade == 18){
        printf("Precisa se alistar");
    }else{
        printf("Maior de Idade");
    }

    return 0;

}
