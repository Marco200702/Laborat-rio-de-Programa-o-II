#include <stdio.h>

/*2. Passagem por referência 
Implemente uma função chamada trocar que receba dois inteiros por referência (via ponteiro) e troque seus valores. 
No main, peça ao usuário para digitar dois números, chame a função e mostre os valores trocados.*/

// Função para trocar dois valores
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;       
    *b = temp;     
}

int main() {
    int x, y;
    
    printf("PASSAGEM POR REFERENCIA\n\n");
    printf("Insira o número para x: ");
    scanf("%d", &x);

    printf("Digite o número para y: ");
    scanf("%d", &y);

    // Chama a função para fazer a troca
    trocar(&x, &y);

    printf("\nApós a troca:\n\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

