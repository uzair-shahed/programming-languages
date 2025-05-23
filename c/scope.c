// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>



int add(int x, int y) {
    int result = x + y;

    return result;
}

int main() {
    // int result = 0;
    // int result = 1; // Note: Variables in the same scope
    //                 // can NOT share same name! C does not
    //                 // reallocate the values!

    int result = add(3, 4);
    printf("%d", result);

    return 0;
}

