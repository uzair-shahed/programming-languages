// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>

int main() {
    // This is how to fill the cells in an array with values
    // It is a static array, so you need to fill the scores
    // manually.
    int scores[5] = {0};
    int size = sizeof(scores) / sizeof(scores[0]);
    
    for (int i = 0; i < size; i++) {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < size ; i++) {
        printf("%d ", scores[i]);
    }

    return 0;
}