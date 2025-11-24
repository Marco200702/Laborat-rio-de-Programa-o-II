#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = NULL;
    int c, len = 0;

    printf("Digite uma string (ENTER para terminar): ");

    while ((c = getchar()) != '\n' && c != EOF) {
        str = realloc(str, (len + 2) * sizeof(char)); // +1 char + '\0'
        if (str == NULL) return 1;
        

        str[len] = c;
        len++;
        str[len] = '\0';
    }

    printf("Voce digitou: %s\n", str);

    free(str);
    return 0;
}