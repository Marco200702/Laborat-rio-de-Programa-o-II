#include <stdio.h>

// define a função principal do programa e indica que ela não recebe nenhum argumento e retorna um valor inteiro
int main(void){

    printf("\nMarco Antonio Cordeiro de Goes\n");
    printf("Tenho 18 anos\n");
    printf("Licenciatura em Computacao\n");
    printf("\n Eu vou ficar\n guardado no seu coracao\n na noite fria a solidao\n saudade vai chamar meu nome\n");
    
    int i = 1;
    int CONSTANTE = 2;
    do {
        printf("%d x %d = %d\n", CONSTANTE, i, CONSTANTE * i);
        ++i;
    }  while (i <= 10);

    return 0;
}