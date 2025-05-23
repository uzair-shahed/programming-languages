#include <stdio.h>

int main() {
    int rows = 0;
    int columns = 0;
    char symbol = '\0';

    printf("Enter the # of rows: ");
    scanf("%d", &rows);

    printf("Enter the # of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for (int c = 0; c < columns; c++) {
        for (int r = 0; r < rows; r++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}