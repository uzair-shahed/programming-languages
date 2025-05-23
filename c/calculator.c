// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <string.h>

int main()
{
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator); // clear \n in input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':

            if (num2 == 0) {
                printf("Division by zero not allowed.\n");
            } else {
                result = num1 / num2;
            }

            break;
        default:
            printf("Wrong operator input! Please choose one of (+ - * /)");
    }
    
    printf("Result is: %.2lf", result);
    return 0;
}