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

/* Lê todo o arquivo de texto e imprime na tela */
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

/* Demonstra fseek e ftell para obter tamanho e pular posições */
void show_file_size_and_seek(const char *filename) {
    FILE *f = fopen(filename, "rb");
    if (!f) {
        perror("Erro ao abrir arquivo para calcular tamanho");
        return;
    }

    // Move para o fim e pega a posição (tamanho)
    if (fseek(f, 0, SEEK_END) != 0) {
        perror("fseek falhou");
        fclose(f);
        return;
    }
    long size = ftell(f);
    if (size == -1L) {
        perror("ftell falhou");
        fclose(f);
        return;
    }
    printf("Tamanho do arquivo \"%s\" = %ld bytes\n", filename, size);

    // Volta para o início
    rewind(f);

    // Pular 10 bytes a partir do início (exemplo)
    if (fseek(f, 10, SEEK_SET) == 0) {
        long pos = ftell(f);
        printf("Posição após pular 10 bytes = %ld\n", pos);
    }

    fclose(f);
}


int main(void) {
    const char *txtfile = "demo.txt";

    // 1) Escrever texto sobrescrevendo
    write_text_overwrite(txtfile, "Linha 1: Introdução a arquivos em C");
    write_text_overwrite(txtfile, "Linha 2: sobrescrevendo demonstração");

    // 2) Acrescentar texto
    append_text(txtfile, "Linha 3: texto adicionado com append");
    append_text(txtfile, "Linha 4: outra linha adicionada");

    // 3) Ler e mostrar conteúdo
    printf("=== Conteúdo do arquivo de texto ===\n");
    read_text(txtfile);

    // 4) Mostrar tamanho e usar fseek/ftell
    printf("\n=== Informações sobre o arquivo ===\n");
    show_file_size_and_seek(txtfile);

    printf("\n===================================\n");
    // 5) Renomear arquivo de texto
    if (rename(txtfile, "demo_renomeado.txt") == 0) {
        printf("Arquivo renomeado com sucesso para demo_renomeado.txt\n");
    } else {
        perror("Falha ao renomear arquivo");
    }

    // 6) Remover arquivo texto
    if (remove("demo_renomeado.txt") == 0) {
        printf("Arquivo de texto 'demo_renomeado.txt' removido\n");
    } else {
        perror("Falha ao remover arquivo texto");
    }

    return 0;
}