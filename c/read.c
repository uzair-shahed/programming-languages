// Code based on tutorial by Bro Code
// Playlist: https://www.youtube.com/watch?v=2ciUcosJFBc&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe
// May be modified or re-typed by me for learning purposes

#include <stdio.h>

int main()
{
    FILE *p_file = fopen("C:\\Users\\uzair\\Documents\\coursera\\programming in c, c++, go\\output.txt", "r");

    // When reading files, we need a buffer.
    // Buffers help ensure we are utilizing read/write capacity properly
    // A good buffer size is 1024 bytes == 1 KB
    char buffer[1024] = {0};

    if (p_file == NULL)
    {
        printf("Error opening file!\n");
        return -1;
    }

    // Below code is how you read from a file
    // For fgets: fgets(buffer, size_of_buffer, pointer_to_file)
    while (fgets(buffer, sizeof(buffer), p_file) != NULL)
    {
        printf("%s", buffer);
    }

    // The below code closes a file.
    fclose(p_file);

    return 0;
}