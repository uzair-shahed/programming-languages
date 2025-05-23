// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number_prices = 0;
    printf("Enter the number of prices to add: ");
    scanf("%d", &number_prices);

    float *prices = malloc(number_prices * sizeof(float));

    if (prices == NULL)
    {
        printf("Memory allocation error!\n");
        return -1;
    }

    for (int i = 0; i < number_prices; i++)
    {
        printf("Enter price %d to add: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int new_number = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &new_number);

    float *temp = realloc(prices, new_number * sizeof(float));

    if (temp == NULL)
    {
        printf("Memory REALLOCATION failed!\n");
        return -1;
    }
    else
    {
        prices = temp; // prices now points to new memory instead of old memory
        temp = NULL;   // You have to fix the dangling pointer for temp since you'll be using prices variable henceforth

        for (int i = number_prices; i < new_number; i++) // We want to just add on the new prices without overwriting the previous ones
        {
            printf("Enter price %d to add: ", i + 1);
            scanf("%f", &prices[i]);
        }

        printf("\n***PRICES**\n");
        for (int i = 0; i < new_number; i++)
        {
            printf("Price %d is: $%.2f\n", i + 1, prices[i]);
        }
    }

    free(prices);
    prices = NULL;

    return 0;
}
