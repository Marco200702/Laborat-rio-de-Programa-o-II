#include <stdio.h>

/*5. Ponteiros para ponteiros
Crie um programa que:
● Declare uma variável inteira x = 99
● Crie um ponteiro p para x
● Crie um ponteiro pp que aponte para p
● Altere o valor de x para 123 usando pp (não use x nem p)
● Imprima o novo valor de x
*/


int main() {

    printf("PONTEIROS PARA PONTEIROS\n\n");

    int x = 99;     // variável x original
    int *p = &x;    // ponteiro para x
    int **pp = &p;  // ponteiro para ponteiro

    printf("Valor original de x: %d\n\n", x);

    // Alterando o valor de x usando apenas pp
    **pp = 123;

    // Imprimindo o novo valor
    printf("Novo valor de x: %d\n", x);

    return 0;
}
