#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Bibliotecas necessárias para gerar números aleatórias envolvendo mili segundos e etc...

/*EXEMPLO 1

int main(){

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int r = rand() % 10;

    //Imprime o número gerado
    printf("Numero gerado: %d", r);

    return 0;

}

*/

/*EXEMPLO 2 com intervalos especificos

int main(){

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um número aleatório de 0 a 9
    int r = (rand() % 10) + 5;

    //Imprime o número gerado
    printf("Numero gerado: %d", r);

    return 0;

}

*/

//EXEMPLO 3 com uso de variáveis no escopo do código

int main(){

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um número aleatório de 5 a 14
    int maximo = 14;
    int minimo = 5;

    //Então teremos um número de 0 a 9 +5 ou seja o minimo sera 5 e o máximo será 14
    int r = (rand() % (maximo - minimo + 1)) + minimo;

    //Seria o mesmo que 14 - 5 + 1 = 10
    printf("Numero gerado: %d", r);

    return 0;

}
