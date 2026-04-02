#include <stdio.h>
#include <stdlib.h>

// Função void (Não retorna nada)
void desenhaSeparador(){
    printf("\n-----------------\n");
}

int main(){

    // Chama a função e executa o que estiver dentro dela
    desenhaSeparador();
    printf("Oi");
    desenhaSeparador();
    printf("Fim.");
    desenhaSeparador();

    return 0;
}
