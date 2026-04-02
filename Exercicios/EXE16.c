#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA DE CALCULADORA, QUE LEIA DOIS VALORES E MOSTRE AS OPÇÕES DE SOMAR OU SUBTRAIR APÓS A OPÇÃO O RESULTADO SERÁ MOSTRADO NA TELA, BASEADO EM UM SWTICH
/*
EXEMPLO DE CÓDIGO
*/


int main(){

    printf("Vamos brincar de calcular\n");

    int numero1, numero2, resultado, resultado, escolha;

    printf("Digite dois números inteiros \n");
    scanf("%d" "%d", &numero1, &numero2);
    //
    printf("CALCULADORA               \n");
    printf("1 - Somar                 \n");
    printf("2 - Subtrair              \n");
    printf("Escolha uma função \n");

    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            resultado = (numero1 + numero2);
            break;
        case 2:
            resultado = (numero1 - numero2);
            break;
        defautl:
            printf("Opção inválida");
            break;
    }

    printf("O seu resultado é: %d", resultado);

    return 0;

}
