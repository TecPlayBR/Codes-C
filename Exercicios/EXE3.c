/*MOSTRE O RESULTADO DA MULTIPLICAÇÃO ENTRE DOIS NÚMEROS QUEBRADOS*/

#include <stdio.h>
#include <stdlib.h>

int main () //FLOAT SEMPRE VAI SER USADO CASO PRECISE QUEBRAR ALGO COM . (PONTO) DO CONTRÁRIO SE SAR INIT, NUNCA VAI OBTER UM NÚMERO QUEBRADO POIS A FUNÇÃO SEMPRE VAI INTEIRA
{
    float valor1 = 12.3;
    float valor2 = 6.6;
    float resultado = valor1 * valor2;
    printf("Resultado da Multiplicação de A + B: %f", resultado);
    return 0;
}
