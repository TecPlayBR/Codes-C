#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//LAÇOS DE REPETIÇÃO

int main(){

    //O inicializador para negativos pode começar em números positivos
    int i = 0;

    //Se for negativo o seu while muda para um número negativo como -1 por exemplo
    while (i <= 10){

        //imprime i e pula uma linha
        printf("%d \n", i);

        //Aumenta em 1 o valor de i atual

        i = i + 1;

        //pODE USAR i -= 1;

        /*
        Quando chega aqui o código volta para
        linha 9 e verifica se a condição
        i <=10 continua verdadeira
        para executar o laço novamente ou sair

        */

    }

    return 0;

}

//Exemplo do da para usar algo em função que é muita usado em jogos, ou seja o famoso ! que fica como != Enquanto o valor do while não for igual aquela valor ele vai executar o programa
//Quando chegar naquela conclusão ele vai encerrar o código, muito usado para obtenção de logs ou dependência no código que exige validação
//Pode usar também como < ou >  pois isso é possível
//Algo muito usado também é comprativo usando pipe pipe || ou seja ambas as validações precisam ser atendidas do contrário ele sempre vai se manter até que a validação seja concluída
