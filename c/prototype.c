// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // Function Prototype
bool age_check(int age);

int main() {
    hello("Uzair", 30);

    if (age_check(30)) {
        printf("You are old enough to work at the office.");
    } else {
        printf("You are NOT old enough to work at the office.");
    }

    return 0;
}

void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old.\n", age);
}

bool age_check(int age) {
    return age >= 16;
}