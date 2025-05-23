// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <string.h>

int main() {
    char names[3][25] = {0};
    int array_size = sizeof(names) / sizeof(names[0]);

    for (int i = 0; i < array_size; i++) {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for (int i = 0; i < array_size; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}