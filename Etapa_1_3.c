#include <stdio.h>

int main(void){

 //ETAPA 3 - Exercicio 7
    float numero;

    printf("\nDigita um numero: ");
    scanf("%f", &numero);

    if (numero > 0){
        printf("\nO numero %2.f se trata de um valor POSITIVO\n", numero);
    }
    else if (numero == 0){
        printf("\nO numero %2.f e ZERO\n", numero);
    }
    else {
        printf("\nO numero %2.f se trata de um valor NEGATIVO\n", numero);
    }
    
//##################################################################################################

    //ETAPA 3 - Exercício 8

    float numero1;
    float numero2;

    printf("\nInsira o primeiro valor: ");
    scanf("%f", &numero1);

    printf("\nInsira o segundo valor: ");
    scanf("%f", &numero2);

    if (numero1 > numero2){
        printf("\nO numero %2.f e maior que o numero %2.f\n", numero1, numero2);
    }
    else if (numero2 > numero1){
        printf("\nO numero %2.f e maior que o numero %2.f\n", numero2, numero1);
    }
    else {
        printf("\nOs numeros %2.f e %2.f sao iguais\n", numero1, numero2);
    }


//#############################################################################################

    //ETAPA 3 - Exercício 9

    float notas = 0;
    float soma;
    int contador = 1;
    float media;

    while (soma != 0){
        printf("\nInsira a nota da prova %d (0 para sair): ", contador);
        scanf("%f", &soma);
        ++contador;
        notas += soma;
    }

    contador -= 2;
    media = notas / contador;
    
    printf("\nA media foi %f\n", media);

    if (media >= 7){
        printf("O aluno foi APROVADO\n\n");
    }
    else if (media >= 5 & media < 7){
        printf("O aluno esta de RECUPERACAO\n\n");
    }
    else{
        printf("O aluno esta REPROVADO\n\n");
    }

}