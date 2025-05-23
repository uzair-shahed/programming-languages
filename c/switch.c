#include <stdio.h>

int main()
{
    char day_of_week = '\0';

    printf("Please enter a day of the week (M, T, W, R, F, S, X): ");
    scanf("%s", &day_of_week);

    switch (day_of_week) {
        case 'M':
            printf("It is Monday.");
            break;
        case 'T':
            printf("It is Tuesday.");
            break;
        case 'W':
            printf("It is Wednesday.");
            break;
        case 'R':
            printf("It is Thursday.");
            break;
        case 'F':
            printf("It is Friday.");
            break;
        case 'S':
            printf("It is Saturday.");
            break;
        case 'X':
            printf("It is Sunday.");
            break;
        default:
            printf("Consider an int in the range [1, 7] to return a day.");
    }

    return 0;
}