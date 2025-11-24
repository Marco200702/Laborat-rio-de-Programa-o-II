#include <stdio.h>
#include <stdlib.h>

/*Exercício 3 – Struct com ponteiro para próxima
Crie uma struct Node com os campos:
● inteiro valor
● ponteiro prox para o próximo Node
Peça para o usuário digitar 5 números e monte manualmente uma lista encadeada (sem
usar funções). Depois, percorra a lista imprimindo os valores.
*/

struct Node {
    int valor;
    struct Node *prox;
};

int main() {
    
    printf("STRUCT COM PONTEIRO PARA PROXIMO\n\n");
    struct Node *inicio = NULL;   // ponteiro para o primeiro nó
    struct Node *atual = NULL;    // ponteiro auxiliar

    // Cria-se manualmente a lista com 5 números
    printf("Digite 5 numeros:\n");

    for (int i = 0; i < 5; i++) {
        struct Node *novo = (struct Node*) malloc(sizeof(struct Node));

        if (novo == NULL) {
            printf("Erro ao alocar memoria.\n");
            return 1;
        }

        printf("Valor %d: ", i + 1);
        scanf("%d", &novo->valor);

        novo->prox = NULL;

        if (inicio == NULL) {
            // primeiro elemento da lista
            inicio = novo;
        } else {
            // encontra o último e adiciona
            atual->prox = novo;
        }

        atual = novo; // atualiza o último nó
    }

    // Impressão da lista
    printf("\n=== Valores na lista encadeada ===\n");
    atual = inicio;

    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->prox;
    }

    printf("\n");

    return 0;
}
