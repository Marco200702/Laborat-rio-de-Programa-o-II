#include <stdio.h>
#include <string.h>

/*Exercício 2 – Vetor de struct
Usando a struct Aluno do exercício anterior, armazene os dados de até 100 alunos em um
vetor.
O programa deve permitir:
● Inserir um novo aluno na próxima posição livre
● Listar todos os alunos cadastrados
*/

#define MAX 100   // quantidade máxima de alunos

// Struct do exercício anterior
struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno alunos[MAX];
    int quantidade = 0;  // controla quantos alunos já foram cadastrados
    int opcao;

    do {
        printf("\n==== MENU ====\n");
        printf("1 - Inserir novo aluno\n");
        printf("2 - Listar alunos cadastrados\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); // limpa o \n do scanf

        if (opcao == 1) {
            if (quantidade >= MAX) {
                printf("Limite de alunos atingido!\n");
            } else {
                printf("\n--- Cadastro de Aluno ---\n");

                printf("Nome: ");
                fgets(alunos[quantidade].nome, 50, stdin);
                alunos[quantidade].nome[strcspn(alunos[quantidade].nome, "\n")] = '\0';

                printf("Matrícula: ");
                scanf("%d", &alunos[quantidade].matricula);

                printf("Nota: ");
                scanf("%f", &alunos[quantidade].nota);
                getchar(); // consome \n

                quantidade++;
                printf("Aluno cadastrado com sucesso!\n");
            }
        }

        else if (opcao == 2) {
            if (quantidade == 0) {
                printf("Nenhum aluno cadastrado ainda.\n");
            } else {
                printf("\n=== Lista de Alunos (%d cadastrados) ===\n", quantidade);
                for (int i = 0; i < quantidade; i++) {
                    printf("\nAluno %d:\n", i + 1);
                    printf("Nome: %s\n", alunos[i].nome);
                    printf("Matrícula: %d\n", alunos[i].matricula);
                    printf("Nota: %.2f\n", alunos[i].nota);
                }
            }
        }

        else if (opcao != 0) {
            printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    printf("Encerrando o programa...\n");
    return 0;
}
