#include <stdio.h>
/*
7. Vetor e Funções Combinadas
Crie um programa que tenha: 
Um procedimento para ler os elementos de um vetor. 
Uma função que calcule a média aritmética dos valores. 
Um procedimento que imprima apenas os valores acima da média.*/

#define TAM 10   // Defini-se um tamanho para o vetor vetor

// Procedimento para ler os elementos inseridos no vetor
void lerVetor(float vetor[]) {
    printf("Digite %d valores:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("vetor[%d] = ", i);
        scanf("%f", &vetor[i]);
    }
}

// Função para calcular a média do vetor
float media(float vetor[]) {
    float soma = 0;
    for (int i = 0; i < TAM; i++) {
        soma += vetor[i];
    }
    return soma / TAM;
}

// Procedimento para imprimir valores acima da média
void imprimeAcimaMedia(float vetor[], float m) {
    printf("\nValores acima da média (%.2f):\n", m);
    for (int i = 0; i < TAM; i++) {
        if (vetor[i] > m) {
            printf("%.2f ", vetor[i]);
        }
    }
    printf("\n");
}

int main() {
    float vetor[TAM];

    // Leitura do vetor
    lerVetor(vetor);

    // Cálculo da média
    float m = media(vetor);
    printf("\nMedia aritmetica do vetor = %2.f", m);

    // Impressão dos valores acima da média
    imprimeAcimaMedia(vetor, m);

    return 0;
}
