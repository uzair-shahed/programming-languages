// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>

int main()
{
    // TEMP CONVERSION PROGRAM

    char choice = '\0';

    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    printf("Temperature Conversion Program");

    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp Celsius (C) or Fahrenheit (F)?\n");

    scanf("%c", &choice);

    if (choice == 'C') {
        // C to F
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit.\n", celsius, fahrenheit);
    } else if (choice == 'F') {
        // F to C
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius.\n", fahrenheit, celsius);
    } else {
        printf("Invalid choice! Please select C or F.\n");
    }

    return 0;
}