#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Faça um programe que mostre a soma de dois números entre 5 e 10, apenas quandos os dois números digitados estiverem no intervalo 5 e 10

int main(){

    int num1 = 0, num2 = 0;

    while (num1 < 5 || num1 > 10 || num2 < 5 || num2 > 10){
        printf("Informe dois números entre 5 e 10:\n");
        scanf("%d %d", &num1, &num2);

        if (num1 < 5 || num1 > 10 || num2 < 5 || num2 > 10){
            printf("Valores inválidos! Tente novamente.\n");
        }
    }

    printf("Soma: %d\n", num1 + num2);

    return 0;
}


//Método dois
/*

#include <stdio.h>

int main(){

    int num1, num2;

    do {
        printf("Informe dois números entre 5 e 10:\n");
        scanf("%d %d", &num1, &num2);

        if (num1 < 5 || num1 > 10 || num2 < 5 || num2 > 10){
            printf("Valores inválidos! Tente novamente.\n");
        }

    } while (num1 < 5 || num1 > 10 || num2 < 5 || num2 > 10);

    printf("Soma: %d\n", num1 + num2);

    return 0;
}

*/
