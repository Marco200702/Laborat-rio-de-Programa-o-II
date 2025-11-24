#include <stdio.h>
#include <stdlib.h>
/*
6. Desafio final
Escreva um programa que:
● Leia n inteiros do usuário (tamanho definido em tempo de execução)
● Aloque memória dinamicamente usando malloc
● Use ponteiros para preencher os valores
● Crie uma função que receba o vetor dinâmico e seu tamanho e retorne o maior valor
encontrado
● Mostre o resultado e libere a memória com free
*/

// Função que retorna o maior valor de um vetor dinâmico
int maiorValor(int *v, int n) {
    int maior = *v;   

    for (int i = 1; i < n; i++) {
        if (*(v + i) > maior) {
            maior = *(v + i);
        }
    }

    return maior;
}

int main() {
    int n;
    int *vetor;

    // Lê o tamanho
    printf("Digite quantos números deseja inserir: ");
    scanf("%d", &n);

    // Aloca memória
    vetor = (int*) malloc(n * sizeof(int));

    // Vê se a alocação deu certo
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenche o vetor usando ponteiros
    printf("\nDigite os %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", vetor + i);
    }

    // Chama a função
    int maior = maiorValor(vetor, n);

    // Imprime o resultado
    printf("\nMaior valor encontrado: %d\n", maior);

    // Libera a memória
    free(vetor);

    return 0;
}
