#include <stdio.h>
#include <stdlib.h>

int valor = 0;

void adicionaUmAte10(){

    // Se o valor for menor que 10
    if(valor < 10){

        // Imprime na tela
        printf("%d\n", valor);

        // Adiciona 1
        valor++;

        // Chama a função de novo (recursão)
        adicionaUmAte10();
    }
}

int main(){

    // Chama a função uma vez
    adicionaUmAte10();

    // Encerrada a recursão
    printf("Fim");

    return 0;
}
