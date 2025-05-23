#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include <windows.h>

int main()
{
    // This program is for a digital clock

    time_t rawtime = 0;       // Jan 1 1970 (Epoch)
    struct tm *p_time = NULL; // Be careful not to dereference before assigning this.
    bool is_running = true;

    printf("***WELCOME TO THE DIGICLOCK***\n");

    while (is_running)
    {
        time(&rawtime);
        p_time = localtime(&rawtime);

        // Note: (*p_time).tm_hour is the same as p_time->tm_hour
        // The first is a longer way to write: dereference p_time before accessing that structs attribute
        // The second way is a shorter way of writing the first.
        printf("\r%02d:%02d:%02d", (*p_time).tm_hour, p_time->tm_min, p_time->tm_sec);

        sleep(1);
    }

    return 0;
}