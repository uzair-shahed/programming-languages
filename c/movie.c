// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10.00;
    bool is_student = true;
    bool is_senior = true;

    // student = $9
    // senior = $8
    // student + senior = $7

    if (is_student && is_senior) {
        printf("You get a discount of 30%%!\n");
        price *= 0.7;
    }
    else if (is_student) {
        printf("You get a student discount of 10%%!\n");
        price *= 0.9;
    } else if (is_senior) {
        printf("You get a discount of 20%%!\n");
        price *= 0.8;
    }

    printf("The price of a ticket is $%.2f", price);
}