//Este conteúdo se baseia na construção de valores (variáveis) para definir algo durante o código

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Testando leitura
    //printf("Hello World");

    /*EXEMPLO - 1 (LENDO INTEIROS)*/
    //int a;
    //scanf("%d", &a);

    /*EXEMPLO - 2 (LENDO NÚMEROS QUEBRADOS)*/
    //float a;
    //scanf("%f", &a);

    /*EXEMPLO - 3 (LENDO UMA LETRA)*/
    //char a;
    //scanf("%c", &a);

    /*EXEMPLO PRÁTICO*/
    int a;
    int b;

    //OPCIONAL o printf
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    int resultado = a + b;

    printf("Resultado: %d", resultado);
    return 0;
}
