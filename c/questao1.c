#include <stdio.h>
#include <string.h>

int findFirstOccurrence(char* str, char c, int startIdx) {
    int len = strlen(str);

    for (int i = startIdx; i < len; i++) {
        if (str[i] == c) {
            return i;
        }
    }

    return -1; // Caractere não encontrado
}

int main() {
    char str[100];
    char c;
    int startIdx;

    printf("Digite a string: ");
    scanf("%s", str);

    printf("Digite o caractere a ser buscado: ");
    scanf(" %c", &c);

    printf("Digite a posição inicial: ");
    scanf("%d", &startIdx);

    int result = findFirstOccurrence(str, c, startIdx);

    if (result != -1) {
        printf("O caractere '%c' foi encontrado pela primeira vez na posição %d da string.\n", c, result);
    } else {
        printf("O caractere '%c' não foi encontrado na string a partir da posição %d.\n", c, startIdx);
    }

    return 0;
}
