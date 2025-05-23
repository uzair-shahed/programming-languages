// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>

// enum Day {
//     SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
// };

// Can either do as above, or below for manual numbering
// enum Day {
//     SUNDAY = 1, MONDAY = 3, TUESDAY = 2, WEDNESDAY = 9, THURSDAY = 0, FRIDAY = 11, SATURDAY = 29
// };

// Combining an enum with typedef. The
// typedef enum {
//     SUNDAY = 1, MONDAY = 3, TUESDAY = 2, WEDNESDAY = 9, THURSDAY = 0, FRIDAY = 11, SATURDAY = 29
// } Day;

typedef enum
{
    SUCCESS,
    FAILURE,
    PENDING
} Status;

// PROTOTYPES
void connect_status(Status status);

int main()
{

    // Day today = SUNDAY;

    // if (today == SUNDAY || today == SATURDAY) {
    //         printf("It's the weekend!\n");
    //     } else {
    //         printf("It's the weekday :(\n");
    //     }

    Status status = PENDING;
    connect_status(status);

    return 0;
}

void connect_status(Status status)
{
    switch (status)
    {
    case SUCCESS:
        printf("Connection was successful!\n");
        break;
    case FAILURE:
        printf("Could not connect :(\n");
        break;
    case PENDING:
        printf("Connecting...\n");
        break;
    }
}