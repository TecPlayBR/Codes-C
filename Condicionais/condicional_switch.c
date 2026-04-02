#include <stdio.h>
#include <stdlib.h>

//SWTICH SÃO CONDIÇÕES QUE POSSIBILITAM QUE AMBAS ACONTEÇAM AO MESMO TEMPO, É COMO ESCOLHER AO MENU DE ALGO
//VOCÊ PODE USAR LETRAS TROCANDO PARA CHAR E USANDO ASPAS AO INVÉS DE ALGO INTEIRO
/*
EXEMPLO DE CÓDIGO
*/


int main(){

    //Apresenta o menu
    printf("MC LANCHE                \n");
    printf("1 - BigMac               \n");
    printf("2 - MC Chicken           \n");
    printf("3 - MC Melt              \n");
    printf("Escolha um dos Burguer`s \n");

    int pedido;
    scanf("%d", &pedido);

    switch(pedido){
        case 1:
            printf("BigMac Escolhido");
            break;
        case 2:
            printf("MC Chicken Escolhido");
            break;
        case 3:
            printf("MC Melt Escolhido");
            break;
    }

    return 0;

}
