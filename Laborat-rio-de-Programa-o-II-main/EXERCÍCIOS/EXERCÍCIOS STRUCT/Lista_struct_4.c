#include <stdio.h>
#include <stdlib.h>

/*Exercício 4 – Inserção em lista encadeada
Reutilize a struct Node do exercício anterior.
Agora crie funções:
● Node* inserirInicio(Node* inicio, int valor) que insere um elemento
no início da lista
● void imprimirLista(Node* inicio) que imprime a lista
Teste inserindo alguns elementos e exibindo a lista.
*/

// Struct do exercício anterior
struct Node {
    int valor;
    struct Node *prox;
};

// Insere um novo nó no início da lista e retorna o novo início
struct Node* inserirInicio(struct Node* inicio, int valor) {
    struct Node *novo = (struct Node*) malloc(sizeof(struct Node));

    if (novo == NULL) {
        printf("Erro ao alocar memória.\n");
        return inicio;
    }

    novo->valor = valor;
    novo->prox  = inicio;   // novo aponta para o antigo primeiro

    return novo;    // novo passa a ser o início da lista
}

// Percorre a lista imprimindo os valores
void imprimirLista(struct Node* inicio) {
    struct Node *aux = inicio;

    printf("Lista: ");

    while (aux != NULL) {
        printf("%d ", aux->valor);
        aux = aux->prox;
    }

    printf("\n");
}

int main() {
    struct Node* inicio = NULL;  // lista começa vazia

    // Testes
    inicio = inserirInicio(inicio, 10);
    inicio = inserirInicio(inicio, 20);
    inicio = inserirInicio(inicio, 30);
    inicio = inserirInicio(inicio, 40);

    // Exibe lista
    imprimirLista(inicio);

    return 0;
}
