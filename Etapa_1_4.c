#include <stdio.h>

int main(void){


//ETAPA 4 - EXERCÍCIO 10 --- Exiba os números de 1 a 100.

    int numero = 1;
    while (numero <= 100){
        printf("Numero %i \n", numero);
        ++numero;
    }
    

// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
//ETAPA 4 - EXERCÍCIO 11 --- Tabuada de 1 a 10 usando for.
    printf("\n# # # # # # # # # # # # # # # # # # # # # #\n\n");
    int mult = 1;
    int num_mult = 1;

    for (mult = 1; mult <= 10; ++mult){
        for (num_mult = 1; num_mult <=10; ++num_mult){
            printf("%i X %i = %i \n", mult, num_mult, mult*num_mult);
        }
    }

// # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
//ETAPA 4 - EXERCÍCIO 12 --- Receba números até que o usuário digite 0, e calcule a soma total.
    printf("\n# # # # # # # # # # # # # # # # # # # # # #\n\n");

    float soma;
    float valores = 0;

    while (soma != 0){
        printf("Insira um valor (0 para sair): ");
        scanf("%f", &soma);
        valores += soma;
    }
    printf("\nSoma de todos os valores: %f\n\n", valores);
    return 0;
}