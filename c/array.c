// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>

int length_int(int array_size, int number[]) {
    return array_size / sizeof(number[0]);
}

int main() {

    int number[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F', 'U'};

    int length = length_int(sizeof(number), number);

    for (int i = 0; i < length; i++) {
        printf("%d\n", number[i]);
    }

    return 0;
}