#include <stdio.h>

/*3. Ponteiros e vetores
Escreva um programa que:
● Crie um vetor de 5 inteiros
● Use apenas ponteiros (sem notação [ ]) para preencher os valores digitados pelo
usuário
● Depois percorra o vetor com aritmética de ponteiros e imprima todos os elementos
*/

int main() {
    int vetor[5];
    int *ptr = vetor;  // ponteiro apontando para o primeiro elemento

   printf("PONTEIROS E VETORES\n\n");
   
    // Preenchendo o vetor usando apenas ponteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", ptr + i); 
    }

    // Imprimindo o vetor usando aritmética de ponteiros
    printf("\nValores digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); 
    }

    printf("\n");

    return 0;
}
