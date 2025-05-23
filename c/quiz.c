// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>
#include <ctype.h>

int main() {

    char questions[][100] = {
        "What is the largest planet in the solar system?",
        "What is the hottest planet?",
        "What planet has the most moons?",
        "Is the Earth Flat?",
    };

    char options[][100] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
        "A. Yes\nB. No\nC. Maybe\nD. Sometimes",
    };

    char answer_key[] = {'A', 'B', 'D', 'B'};

    int question_count = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < question_count; i++) {
        printf("\n%s\n", questions[i]);
        printf("%s\n\n", options[i]);

        printf("Enter your choice: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if (guess == answer_key[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG!\n");
        }
    }

    printf("\nYour final score is: %d out of %d points.\n", score, question_count);

    return 0;
}