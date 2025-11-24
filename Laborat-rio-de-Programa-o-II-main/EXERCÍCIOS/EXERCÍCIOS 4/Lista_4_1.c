/*
Implemente um programa em C chamado file_tool.c que realize manipulação de
arquivos de texto a partir de parâmetros fornecidos via linha de comando.
O programa deve receber os seguintes comandos:
● <write> <arquivo> <texto>
Cria ou sobrescreve o arquivo indicado, escrevendo o texto fornecido.
● <append> <arquivo> <texto>
Acrescenta o texto ao final do arquivo indicado.
● <read> <arquivo>
Lê o conteúdo do arquivo e o imprime na tela.
Dica: Combine os código de exemplos apresentados em sala.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreve um texto em modo texto (sobrescreve se existir) */
void write_text_overwrite(const char *filename, const char *text) {
    FILE *f = fopen(filename, "w"); // "w" cria ou sobrescreve
    if (!f) {
        perror("Erro ao abrir arquivo para escrita");
        return;
    }
    fprintf(f, "%s\n", text);
    fclose(f);
}

/* Adiciona texto no final do arquivo */
void append_text(const char *filename, const char *text) {
    FILE *f = fopen(filename, "a"); // "a" abre para append
    if (!f) {
        perror("Erro ao abrir arquivo para append");
        return;
    }
    fprintf(f, "%s\n", text);
    fclose(f);
}

/*  Ele lê todo o arquivo de texto e imprime na tela */
void read_text(const char *filename) {
    FILE *f = fopen(filename, "r"); // "r" - lê o arquivo
    if (!f) {
        perror("Erro ao abrir arquivo para leitura");
        return;
    }

    char buffer[256];
    while (fgets(buffer, sizeof(buffer), f)) {
        printf("%s", buffer); // fgets já traz o '\n' se houver
    }

    if (ferror(f)) {
        perror("Erro durante a leitura");
    }

    fclose(f);
}

   
//######################################################################################################

int main(int argc, char *argv[]) {
    printf("Numero de argumentos: %d\n", argc);

    for(int i = 0; i < argc; i++){
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    if(argc > 1){
        if(strcmp(argv[1], "write") == 0){
            printf("Leitura de texto");
            write_text_overwrite(argv[2], argv[3]);
        }
        
        if(strcmp(argv[1], "append") == 0){
            printf("Adiciona texto");
            append_text(argv[2], argv[3]);

        }
        
        if(strcmp(argv[1], "read") == 0){
            printf("\nImpressao do texto\n");
            read_text(argv[2]);

        }
    }
   

    return 0;
}
