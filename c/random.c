#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int min = 50;
    int max = 100;

    int random_num = (rand() % max - min) + min;

    printf("%d", random_num);

    return 0;
}