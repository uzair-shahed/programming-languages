// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    // int number = 1;

    // do {
    //     printf("Enter a number greater than 0: ");
    //     scanf("%d", &number);
    // } while (number <= 0);

    // char name[50] = "";

    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    // name[strlen(name) - 1] = '\0';
    
    // while (strlen(name) == 0) {
    //     printf("Name cannot be empty. Please enter your name: ");
    //     fgets(name, sizeof(name), stdin);
    //     name[strlen(name) - 1] = '\0';
    // }

    // printf("Hello, %s!", name);

    bool is_running = true;
    char response  = '\0';

    while (is_running) {
        printf("You are playing a game.\n");
        printf("Would you like to continue? (Y/N): ");
        scanf(" %c", &response);

        if (response == 'N') {
            is_running = false;
        } else if (response != 'Y') {
            is_running = false;
            printf("Please only enter required options. Cancelling run.");
        }
    }

    return 0;
}