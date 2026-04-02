#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programa que joga 3 dados (De seis lados) aleatórios e exibe o resultado da soma dos 3 valores gerados na tela

int main(){

    //Usa o tempo atual como semente
    srand(time(NULL));

    //Cria um número aleatório de 0 a 6
    int dado1 = rand() % 6 + 1;
    int dado2 = rand() % 6 + 1;
    int dado3 = rand() % 6 + 1;

    //Variável da soma dos dados
    int soma = dado1 + dado2 + dado3;

    //Imprime o número gerado
    printf("Dados: %d %d %d \n", dado1, dado2, dado3);
    printf("Soma dos dados: %d", soma);

    return 0;

}
