#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // SHOPPING CART PROGRAM

    // Declaring variables with defaults
    char item[50] = ""; // A string to hold the item name.
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price for each item?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    printf("You have bought %d %ss\n", quantity, item);
    total = price * quantity;

    printf("%c%.2f", currency, total);

}