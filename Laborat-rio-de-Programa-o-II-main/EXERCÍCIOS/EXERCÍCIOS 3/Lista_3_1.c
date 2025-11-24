#include <stdio.h>

/*1. Ponteiro básico
Escreva um programa que:
● Crie uma variável int com valor 15
● Crie um ponteiro que aponte para essa variável
● Exiba na tela:
○ O valor da variável
○ O endereço da variável
○ O valor armazenado no ponteiro
○ O valor acessado pelo ponteiro
*/


int main() {
    int variavel = 15;      // variável com valor 15
    int *ponteiro = &variavel;   // ponteiro apontando para a variavel

    printf("PONTEIRO \n\n");
    printf("Valor da variável: %d\n", variavel);
    printf("Endereço da variável: %p\n", (void*)&variavel);
    printf("Valor armazenado no ponteiro (endereço): %p\n", (void*)ponteiro);
    printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

    return 0;
}
