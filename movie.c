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