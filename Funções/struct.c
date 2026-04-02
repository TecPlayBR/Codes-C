/* ESTE É O EXEMPLO 1 DE STRCUT DE FORMA SIMPLES

#include <stdio.h>
#include <stdlib.h>

// Definição do "molde" para Pessoas
struct Pessoa{
    int idade;      // Atributo de idade
    float salario;  // Atributo de salário
};

int main(){

    // Cria uma variável do tipo struct Pessoa
    struct Pessoa pessoa1;

    // Atribui valores
    pessoa1.idade = 25;
    pessoa1.salario = 500.0;

    // Imprime os valores
    printf("%d anos, salario R$%.2f", pessoa1.idade, pessoa1.salario);

    return 0;
}

*/

/* AQUI O EXEMPLO 2 DE STRUCT MAIS FÁCIL E ÁGIL PARA ALGUNS CÓDIGOS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição do "molde" para Pessoas
struct Pessoa{
    int idade;         // Atributo de idade
    float salario;     // Atributo de salário
    char nome[255];    // Atributo do nome
};

int main(){

    // Cria uma variável do tipo struct Pessoa
    struct Pessoa pessoa1;

    // Atribui valores
    pessoa1.idade = 25;
    pessoa1.salario = 500.0;

    // Copia string para o nome
    strcpy(pessoa1.nome, "Bryan");

    // Imprime os dados
    printf("Nome: %s\n", pessoa1.nome);
    printf("%d anos, salario R$%.2f", pessoa1.idade, pessoa1.salario);

    return 0;
}

*/

//EXEMPLO 3

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição do "molde" para Pessoas
struct Pessoa{
    int idade;         // Atributo de idade
    float salario;     // Atributo de salário
    char nome[255];    // Atributo do nome
};

int main(){

    // Cria um vetor de structs (lista de pessoas)
    struct Pessoa pessoas[2];

    // Pessoa 1
    pessoas[0].idade = 25;
    pessoas[0].salario = 500.0;
    strcpy(pessoas[0].nome, "Maria");

    // Pessoa 2
    pessoas[1].idade = 30;
    pessoas[1].salario = 800.0;
    strcpy(pessoas[1].nome, "Bryan");

    int i;

    // Imprime a lista de pessoas
    for(i = 0; i < 2; i++){
        printf("Nome: %s, ", pessoas[i].nome);
        printf("%d anos, ", pessoas[i].idade);
        printf("salario R$%.2f\n", pessoas[i].salario);
    }

    return 0;
}

// OBSERVAÇÃO -> Adicionar o struct antes de Pessoa, ex:
//struct Pessoa pessoa1; // Correção: adicionando a palavra 'struct'
