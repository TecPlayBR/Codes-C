#include <stdio.h>
#include <stdlib.h>

#define LINHA 2
#define COLUNA 3

//MATRIZES

//São vetores multidimensionais, um conjunto de vetores agrupados em um tipo de variável, muito usado para representar tabuleiros

int main(){

    int matriz[LINHA][COLUNA];
    int transposta[COLUNA][LINHA];
    int i, j;

    // Lê a matriz
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    // Transpõe
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    // Imprime matriz original
    printf("\nMatriz original:\n");
    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COLUNA; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprime transposta
    printf("\nMatriz transposta:\n");
    for(i = 0; i < COLUNA; i++){
        for(j = 0; j < LINHA; j++){
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
