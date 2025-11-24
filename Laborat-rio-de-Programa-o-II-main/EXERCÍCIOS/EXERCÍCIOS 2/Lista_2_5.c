#include <stdio.h>
#include <string.h>

//5. Escreva um procedimento que receba uma matriz quadrada 3x3 e preencha uma segunda matriz com a transposta dela.
//Mostre as duas matrizes no main

void matriz_transposta(int matriz[3][3], int resultado_matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            resultado_matriz[j][i] = matriz[i][j];
        }
    }
}

void mostra_matriz(int matriz[3][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", matriz[3][3]);
        }
        printf("\n");
    }
}


int main (){
    int matriz[3][3];

    printf("\nInsira os valores da matriz:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Posicao: [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    return 0;
}