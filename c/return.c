// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdbool.h>

int get_max(int x, int y) {
    if (x > y) {
        return x;
    }

    return y;
}

bool age_check(int age) {
    if (age >= 18) {
        return true;
    }

    return false;
}

double cube(double num) {
    return num * num * num;
}

double square(double num) {
    return num * num;
}

int main() {
    double x = 2;
    double y = 3;
    double z = 4;

    printf("%.2lf\n", square(x));
    printf("%.2lf\n", square(y));
    printf("%.2lf\n", square(z));

    int age = 21;

    if (age_check(age)) {
        printf("You may sign up.\n");
    } else {
        printf("You must be 18+ to sign up.\n");
    }

    int max = get_max(2, 4);
    printf("%d", max);

    return 0;
}