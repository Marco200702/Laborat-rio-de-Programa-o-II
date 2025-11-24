#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    printf("Numero de argumento: %d\n", argc);

    for(int i = 0; i < argc; i++) {
    printf("Argumento %d: %s\n", i, argv[i]);
    }



    if(argc > 2){
        int a = atoi(argv[1]); // converte string para inteiro
        int b = atoi(argv[2]);
        printf("Soma de %d + %d = %d\n", a, b, a + b);
    }



    if(argc > 1) {
        if(strcmp(argv[1]) == "-p"){
            printf("Entrou")
        }
    }

    return 0;
}