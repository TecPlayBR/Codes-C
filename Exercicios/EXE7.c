#include <stdio.h>
#include <stdlib.h>

//FAÇA UM PROGRAMA QUE LEIA DUAS LETRAS E IMPRIMA ELAS NA TELA, UMA AO LADO DA OUTRA
//DICA: IRÁ PRECISAR LIMPAR O LEITOR COM O COMANDO fflush(stdin); NO WINDOWS OU __fpurge(stdin); NO LINUX APÓS LER O PRIMEIRO VALOR

int main() {
    char letra1;
    char letra2;

    //OBSERVAÇÃO NO CODEBLOCKS, IDE USADA PARA ESTE CÓDIGO, O EXEMPLO DO PROFESSOR NÃO FUNCIONA, POIS A LIMPEZA DO BUFFER DO CODEBLOCKS É DIFERENTE
    //ADAPTEI ESTE EXEMPLO USANDO UM ESPAÇO, QUE RECALCULA O VALOR DA MEMÓRIA EXERCIDA, FAZENDO ASSIM O fflush FUNCIONA CONFORME ORIENTAÇÃO
    //DEPENDENDO A SUA IDE FORMAS DIFERENTES VÃO SURGIR, RECOMENDO RECORRER SEMPRE A COMUNIDADE QUE JA UTILIZA A MAIS TEMPO A FERRAMENTA
    printf("Insira a sua primeira letra: ");
    scanf(" %c", &letra1);
    fflush(stdin);   // limpa o buffer (como o professor pediu)

    printf("Insira a sua segunda letra: ");
    scanf(" %c", &letra2);
    fflush(stdin);

    printf("Você formou a palavra: %c%c", letra1, letra2);
    return 0;
}

