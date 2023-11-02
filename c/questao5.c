#include <stdio.h>
#include <string.h>

void printReversedStringWithAReplaced(char* str) {
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == 'A') {
            printf("*");
        } else {
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

int main() {
    char phrase1[100], phrase2[100];

    printf("Digite a primeira frase: ");
    fgets(phrase1, sizeof(phrase1), stdin);

    printf("Digite a segunda frase: ");
    fgets(phrase2, sizeof(phrase2), stdin);

    printf("Frase 1 invertida e com 'A' trocado por '*': ");
    printReversedStringWithAReplaced(phrase1);

    printf("Frase 2 invertida e com 'A' trocado por '*': ");
    printReversedStringWithAReplaced(phrase2);

    return 0;
}
