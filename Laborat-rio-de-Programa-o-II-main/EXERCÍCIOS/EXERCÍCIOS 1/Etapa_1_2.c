#include <stdio.h>

int main(void){

//ETAPA 2 - EXERCICIO 1
    int numero1;
    int numero2;

    printf("\nInsira o primeiro valor:");
    scanf("%d", &numero1);
    printf("Insira o segundo valor:");
    scanf("%d", &numero2);

    int soma = numero1 + numero2;
    int sub = numero1 - numero2;
    int multi = numero1 * numero2;
    float div = numero1 / numero2;
    float resto = numero1 % numero2;

    printf("\nSOMA: %d\nSUBTRACAO: %d\nMULTIPLICACAO: %d\nDIVISAO: %f\nRESTO: %f\n", soma, sub, multi, div, resto);


//ETAPA 2 - EXERCÍCIO 2
    float raio;
    float pi = 3.14;

    printf("\nInsira o valor do raio: ");
    scanf("%f", &raio);

    float expoente = raio * raio;
    float multi_pi = pi * expoente;

    printf("\nA area da circuferencia: %f\n", multi_pi);


//ETAPA 2 - EXERCICIO 3
    int ano = 365;
    int idade;

    printf("\nInsira sua idade: ");
    scanf("%d", &idade);

    int dias = idade * ano;

    printf("\nVoce viveu aproximadamente: %d dias\n", dias);

    return 0;
}