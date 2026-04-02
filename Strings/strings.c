#include <stdio.h>
#include <stdlib.h>

//STRINGS

//Strings são vetores de char, podendo ser usado as funções como fgets e puts, que imprime string com espaço e a outra para ler string com espaço, não confunda são coisas diferentes!

int main(){

    char palavra1[] = "boi";
    char palavra2[5] = "bala";
    char palavra3[] = {'a','b','c','d','\0'};
    char palavra4[5] = {'f','o','n','e','\0'};

    printf("Digite uma palavra com ate 4 letras - ");
    scanf("%4s", palavra2);

    //fflush não funciona corretamente no codeblocks não adianta tentar usar e insistir faz do jeito que foi feito, o porque, pergunte a quem criou essa IDE aqui :)
    getchar();

    char fruta[255];
    printf("\nDigite o nome de uma fruta: ");
    fgets(fruta, sizeof(fruta), stdin);

    printf("\nFruta lida: ");
    puts(fruta);

    return 0;
}
