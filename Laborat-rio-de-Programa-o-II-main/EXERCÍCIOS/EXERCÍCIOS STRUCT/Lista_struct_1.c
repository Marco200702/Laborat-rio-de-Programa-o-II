#include <stdio.h>
#include <string.h>

/*Exercício 1 – Struct simples e acesso a campos
Crie uma struct chamada Aluno com os campos:
● nome (string de até 50 caracteres)
● matrícula (inteiro)
● nota (float)
Peça ao usuário para preencher os dados de 3 alunos e depois exiba os dados na tela.
*/

#define TAM 3   // quantidade de alunos

// Cria-se a struct Aluno
struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno alunos[TAM];

    // Leitura dos dados fornecidos
    printf("=== Cadastro de Alunos ===\n");
    for (int i = 0; i < TAM; i++) {
        printf("\nAluno %d:\n", i + 1);

        printf("Nome: ");
        fflush(stdin);              
        fgets(alunos[i].nome, 50, stdin);

        // Remove o \n do final da string
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        getchar(); 
    }

    // Exibição dos dados
    printf("\n=== Dados cadastrados ===\n");
    for (int i = 0; i < TAM; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}
