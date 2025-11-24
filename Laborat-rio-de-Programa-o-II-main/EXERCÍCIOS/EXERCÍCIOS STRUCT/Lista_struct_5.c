#include <stdio.h>
#include <stdlib.h>

/*Exercício 5 – Remoção em lista encadeada
Com a mesma struct Node, crie uma função:
● Node* removerInicio(Node* inicio) que remove o primeiro elemento da
lista e retorna o novo início.
Teste inserindo 3 elementos, imprimindo a lista, removendo o primeiro e imprimindo
novamente.
*/

struct Node {
    int valor;
    struct Node *prox;
};

// Insere um novo elemento no início (reutilizado do exercício 4)
struct Node* inserirInicio(struct Node* inicio, int valor) {
    struct Node *novo = (struct Node*) malloc(sizeof(struct Node));

    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        return inicio;
    }

    novo->valor = valor;
    novo->prox = inicio;

    return novo;
}

// Remove o primeiro nó da lista e retorna o novo início
struct Node* removerInicio(struct Node* inicio) {
    if (inicio == NULL) {
        printf("Lista já está vazia, nada a remover.\n");
        return NULL;
    }

    struct Node *temp = inicio;      // guarda o primeiro
    inicio = inicio->prox;      // segundo vira o novo início

    free(temp);       // libera o antigo primeiro

    return inicio;      // retorna o novo início
}

// Imprimir a lista
void imprimirLista(struct Node* inicio) {
    struct Node *aux = inicio;
    printf("Lista: ");
    while (aux != NULL) {
        printf("%d -> ", aux->valor);
        aux = aux->prox;
    }
    printf("\n");
}

int main() {
    printf("REMOÇÃO DA LISTA ENCADEADA\n\n");
    
    struct Node *inicio = NULL;

    // Inserindo 3 elementos
    inicio = inserirInicio(inicio, 10);
    inicio = inserirInicio(inicio, 20);
    inicio = inserirInicio(inicio, 30);

    printf("Antes da remoção:\n");
    imprimirLista(inicio);

    // Remove o primeiro nó
    inicio = removerInicio(inicio);

    printf("\nDepois da remoção:\n");
    imprimirLista(inicio);

    return 0;
}
