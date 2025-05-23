// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>

int main()
{
    // WEIGHT CONVERTER PROGRAM

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");

    printf("1. Kilograms to Pounds.\n");
    printf("2. Pounds to Kilograms.\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = 2.20462 * kilograms;
        printf("%.2f kilograms is equal to %.2f pounds.\n", kilograms, pounds);
        
    } else if (choice == 2) {
        printf("Enter the weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms.\n", pounds, kilograms);

    } else if (choice == 0) {
        printf("You did not choose anything!");
    }
     else {
        printf("Invalid choice!");
    }

    return 0;
}