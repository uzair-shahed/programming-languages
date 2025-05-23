#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    int *player_scores = calloc(number, sizeof(int));

    // Avoiding SegFault
    if (player_scores == NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &player_scores[i]);
    }

    printf("\n***PLAYER SCORES***\n");

    for (int i = 0; i < number; i++)
    {
        printf("SCORE %d: %d\n", i + 1, player_scores[i]);
    }

    // Free memory and remove dangling pointer
    free(player_scores);
    player_scores = NULL;

    return 0;
}