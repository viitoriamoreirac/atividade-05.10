#include <stdio.h>
#include <string.h>

void removeSpaces(char* str) {
    int n = strlen(str);
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    removeSpaces(str);

    printf("String resultante após remover os espaços: %s\n", str);

    return 0;
}
