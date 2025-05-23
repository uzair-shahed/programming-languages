// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// Attempted UNGUIDED

// PROTOTYPES
void print_win();
void print_lose();
int random_number(int min, int max);
int computer_move();
void print_move(int move);


int main() {
    printf("*** ROCK PAPER SCISSORS ***\n");

    int user_choice = 0;
    int comp_choice = 0;
    bool loop = true;

    printf("Choose an option:\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSORS\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &user_choice);

        if (user_choice < 1 || user_choice > 3) {
            printf("Please enter a valid choice (1, 2, or 3).\n");
            continue;
        }

        comp_choice = computer_move();
        print_move(comp_choice);

        if (user_choice == 1) {
            if (comp_choice == 2) {
                print_lose();
                loop = false;
            } else if (comp_choice == 3) {
                print_win();
                loop = false;
            }
        } else if (user_choice == 2) {
            if (comp_choice == 3) {
                print_lose();
                loop = false;
            } else if (comp_choice == 1) {
                print_win();
                loop = false;
            }  
        } else if (user_choice == 3) {
            if (comp_choice == 1) {
                print_lose();
                loop = false;
            } else if (comp_choice == 2) {
                print_win();
                loop = false;
            }  
        }
    } while (loop);
}

void print_win() {
    printf("YOU WIN!");
}

void print_lose() {
    printf("YOU LOSE");
}

int random_number(int min, int max) {
    srand(time(NULL));
    int random_num = (rand() % max - min) + min;
    
    return random_num;
}

int computer_move() {
    return random_number(1, 3);
}

void print_move(int move) {
    if (move == 1) {
        printf("Computer chose ROCK.\n");
    } else if (move == 2) {
        printf("Computer chose PAPER.\n");
    } else if (move == 3) {
        printf("Computer chose SCISSORS.\n");
    }
}