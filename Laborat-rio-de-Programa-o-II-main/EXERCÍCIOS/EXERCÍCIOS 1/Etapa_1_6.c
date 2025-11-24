#include <stdio.h>
#include <string.h>
int main(void){

// ETAPA 6 - EXERCÍCIO 15 ---  Usando vetores (array), receba uma frase e retorne sua escrita inversa.

    char vetor [10];

    int i;
    int tamanho;
    
    printf("Insira a palavra: ");
    scanf("%s", vetor);

    tamanho = strlen(vetor);
    
    printf("\n%d\n\n", tamanho);

    //for(vetor = 9, vetor < , vetor, )
    for(i = tamanho - 1; i >= 0; i--){
        printf("%c", vetor[i]);
    }
    printf("\n\n");

// ETAPA 6 EXERCÍCIO 16 --- Usando vetores de vetores (matriz), estruture e apresente um tabuleiro de xadrez.

    int tabuleiro[8][8];

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            tabuleiro[i][j] = (i + j) % 2;
        }
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            printf("%d  ", tabuleiro[i][j]);
        }
        printf("\n");
    }


}

