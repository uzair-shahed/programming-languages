#include <stdio.h>
#include <stdbool.h>

int main()
{
    int temp = 10;
    bool is_sunny = true;

    if (temp > 0 && temp < 30) {
        printf("The temperature is GOOD!\n");
    }else {
        printf("The temperature is BAD\n");
    }

    if (!is_sunny) {
        printf("It is CLOUDY outside!\n");
    } else {
        printf("It is SUNNY outside!\n");
    }

    return 0;
}