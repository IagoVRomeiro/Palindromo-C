#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Palindromo(char *palavra) {
    int largura = strlen(palavra);



    for (int i = 0; i < largura / 2; i++) {
        if (palavra[i] != palavra[largura - i -1]) {
            return 0; // não é um palíndromo
        }
    }
    return 1; // é um palíndromo
}

int main() {
    char palavra[100];

    do {
        scanf("%s", palavra);

        if (strcmp(palavra, "FIM") == 0) {
            printf("Encerrando o programa...\n");
            break;
        }

        if (Palindromo(palavra)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }

    } while (1);

    return 0;
}
