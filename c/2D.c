// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>

int main() {
    int numbers[][4] = {{1, 2, 3, 0}, {1, 2, 5, 2}, {4, 5, 6, 8}};

    int rows = sizeof(numbers) / sizeof(numbers[0]);
    int columns = sizeof(numbers[0], numbers[0][0]);

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < columns; c++) {
            printf("%d ",numbers[r][c]);
        }
        printf("\n");
    }
}