#include <stdio.h>
#include <string.h>
int main(void){

// ETAPA 6 - EXERCÍCIO 15 ---  Usando vetores (array), receba uma frase e retorne sua escrita inversa.

    char vetor [10];

    int i;
    int tamanho;
    
    printf("Insira a palavra: ");
    scanf("%s", vetor);

    tamanho = strlen(vetor);
    
    printf("%d\n", tamanho);

    //for(vetor = 9, vetor < , vetor, )
    for(i = tamanho - 1; i >= 0; i--){
        printf("%c", vetor[i]);
    }

//vetor 

}

//STR LEN