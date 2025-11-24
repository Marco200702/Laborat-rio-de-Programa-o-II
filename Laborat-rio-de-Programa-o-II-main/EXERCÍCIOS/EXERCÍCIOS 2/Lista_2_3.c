#include <stdio.h>
#include <string.h>

//Crie um procedimento que receba um vetor de inteiros e um valor inteiro e preencha todas as posições do vetor com esse valor.
//Depois, imprima o vetor no main.

int preencher (int vetor[], int tamanho, int valor){

    for(int i = 0; i < tamanho; i++){
        vetor[i] = valor;
    }
}

int main (){
int vetor[10];
int valor_para_preencher = 4;

preencher(vetor, 10, valor_para_preencher);

printf("\n\nVetor preenchido:\n");
for(int i = 0; i < 10; i++){
    printf("%d ", vetor[i]);
}

printf("\n\n");
return 0;

}