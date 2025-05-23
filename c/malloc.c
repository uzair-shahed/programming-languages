// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    // Below returns a pointer to an array-like data structure.
    char *grades = malloc(number * sizeof(char)); // number * sizeof(char) allocates memory for the number of characters we want to store
    // malloc() is like renting space on the heap for use. We need to later free this rented space using free()
    // Unlike stack memory, heap memory persists until explicitly freed.

    if (grades == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter the grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for (int i = 0; i < number; i++)
    {
        printf("Grade %d is: %c\n", i + 1, grades[i]);
    }

    // Below code returns the rented space back to the OS
    free(grades);

    // If we don't do the below code, the pointer continues pointing to the useless space that was
    // rented by malloc() but is now freed! This is called a dangling pointer
    grades = NULL; // avoids dangling pointer

    return 0;
}