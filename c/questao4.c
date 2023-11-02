#include <stdio.h>
#include <string.h>

void formatName(char* fullname) {
    int length = strlen(fullname);
    int spaceIndex = -1;

    // Encontrar o índice do último espaço em branco na string (se houver)
    for (int i = length - 1; i >= 0; i--) {
        if (fullname[i] == ' ') {
            spaceIndex = i;
            break;
        }
    }

    // Se houver espaço, formatar o nome no formato SOBRENOME/Nome
    if (spaceIndex != -1) {
        printf("%s/%s\n", &fullname[spaceIndex + 1], fullname);
        fullname[spaceIndex] = '\0'; // Separar o sobrenome do restante da string
        printf("%s/%s\n", fullname, &fullname[spaceIndex + 1]);
    } else {
        printf("Nome completo não possui um sobrenome.\n");
    }
}

int main() {
    char fullname[100];

    printf("Digite o nome completo: ");
    fgets(fullname, sizeof(fullname), stdin);

    // Remover o caractere de nova linha (\n) da entrada
    size_t len = strlen(fullname);
    if (len > 0 && fullname[len - 1] == '\n') {
        fullname[len - 1] = '\0';
    }

    formatName(fullname);

    return 0;
}
