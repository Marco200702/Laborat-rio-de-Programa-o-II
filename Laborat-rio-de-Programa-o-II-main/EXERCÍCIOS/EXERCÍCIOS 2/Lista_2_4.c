#include <stdio.h>
#include <string.h>

//Implemente uma função que receba uma matriz 3x3 e retorne a soma de todos os elementos.
//No main, leia a matriz do teclado e mostre o resultado.

int soma_matriz(int matriz[3][3]){
    int soma = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main (){
    int matriz[3][3];

    printf("\nInsira os valores para a matriz: \n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Posicao [%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    int resultado_soma = soma_matriz(matriz);

    printf("\nResultado da soma de todos os valores da matriz: %d\n\n", resultado_soma);

    return 0;
}