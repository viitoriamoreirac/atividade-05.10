#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void extractDateComponents(char* date, int* day, int* month, int* year) {
    if (strlen(date) != 10 || date[2] != '/' || date[5] != '/') {
        printf("Formato inválido. Utilize o formato DD/MM/AAAA.\n");
        return;
    }

    char dayStr[3], monthStr[3], yearStr[5];
    dayStr[0] = date[0];
    dayStr[1] = date[1];
    dayStr[2] = '\0';

    monthStr[0] = date[3];
    monthStr[1] = date[4];
    monthStr[2] = '\0';

    yearStr[0] = date[6];
    yearStr[1] = date[7];
    yearStr[2] = date[8];
    yearStr[3] = date[9];
    yearStr[4] = '\0';

    *day = atoi(dayStr);
    *month = atoi(monthStr);
    *year = atoi(yearStr);
}

int main() {
    char date[11];
    int day, month, year;

    printf("Digite a data no formato DD/MM/AAAA: ");
    scanf("%s", date);

    extractDateComponents(date, &day, &month, &year);

    if (day <= 0 || day > 31 || month <= 0 || month > 12 || year <= 0) {
        printf("Data inválida.\n");
    } else {
        printf("Dia: %d, Mês: %d, Ano: %d\n", day, month, year);
    }

    return 0;
}
