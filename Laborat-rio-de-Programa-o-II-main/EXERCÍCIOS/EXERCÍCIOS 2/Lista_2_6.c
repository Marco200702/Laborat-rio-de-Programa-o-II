#include <stdio.h>
/*
6. Matriz – DIAGONAL PRINCIPAL
Faça uma função que receba uma matriz 4x4 e retorne a soma dos elementos da diagonal principal.
Teste a função com valores lidos do teclado. */

// Função que soma a diagonal principal
int soma_diagonalPrincipal(int matriz[4][4]) {
    int soma = 0;
    for (int i = 0; i < 4; i++) {
        soma += matriz[i][i];   
    }
    return soma;
}

int main() {
    int matriz[4][4];

    printf("Digite os valores da matriz 4x4:\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int resultado = soma_diagonalPrincipal(matriz);

    printf("\nA soma da diagonal principal da matriz = %d\n", resultado);

    return 0;
}
