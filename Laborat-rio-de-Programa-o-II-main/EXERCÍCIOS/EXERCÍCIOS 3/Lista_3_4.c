#include <stdio.h>

/*4. Ponteiros e strings
Faça um programa que:
● Leia uma string (até 50 caracteres)
● Conte o número de vogais usando ponteiros para percorrer a string
● Mostre o resultado
*/

int main() {
    char str[51]; 
    char *p;
    int vogais = 0;

    printf("PONTEIROS E STRINGS\n\n");
    
    printf("Inisra uma string (até 50 caracteres): ");
    fgets(str, 51, stdin);  // Ele lê a string inteira, incluindo os espaços

    p = str;  // este ponteiro aponta para o início da string

    // vai percorrer toda string usando ponteiro
    while (*p != '\0') {
        char c = *p;

        // Vai verificar as vogais minúsculas e maiúsculas
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            vogais++;
        }

        p++;
    }

    printf("Quantidade de vogais: %d\n", vogais);

    return 0;
}
