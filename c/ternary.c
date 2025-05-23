// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 5;
    int y = 6;
    int max = (x > y) ? x : y;
    printf("%d\n", max);

    bool is_online = true;
    printf("%s\n", (is_online) ? "online" : "offline");

    int number = 8;
    printf("%s\n", (number % 2 == 0) ? "even" : "odd");

    int age = 21;
    printf("%s\n", (age > 18) ? "adult" : "child");

    int hours = 12;
    int minutes = 30;

    printf("%d:%d %s", hours, minutes, (hours > 12) ? "PM" : "AM");

    return 0;
}