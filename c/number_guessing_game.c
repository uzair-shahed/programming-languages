// Code based on code-along tutorials by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Attempted UNGUIDED

//  PROTOTYPES
int gen_answer();


int main() {
    int input = 0;
    int attempts = 0;
    int answer = gen_answer();

    printf("*** NUMBER GUESSING GAME ***\n");

    while (input != answer) {
        printf("Guess a number between 1 - 100: ");
        scanf("%d", &input);

        if (input == answer) {
            printf("CORRECT! ");
            break;
        } else {
            
            if (input < answer) {
                printf("WRONG! TOO LOW.\n");
            } else {
                printf("WRONG! TOO HIGH.\n");
            }
            
            attempts++;
        }
    }

    printf("It took you %d tries.", attempts);
}

int gen_answer() {
    srand(time(NULL));
    
    int min = 1;
    int max = 10;
    
    int random_num = (rand() % max - min) + min;
    
    return random_num;
}