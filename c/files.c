#include <stdio.h>

int main()
{

    // There's a built-in struct for working with files provided by the standard
    // input-output header file. Called FILE.

    // Create a pointer to a FILE struct
    // The below code opens a file.
    FILE *p_file = fopen("output.txt", "w"); // "w" is for writing to a file. "r" is for reading.
    // If we are unable to create an open file, the above function returns NULL

    char text[] = "THIS IS A PROGRAMMING TUTORIAL.\n";

    if (p_file == NULL)
    {
        printf("Error opening file.\n");
        return -1; // EXIT CODE
    }

    // The below is how to write to a file
    // fprintf() stands for file printf
    // fprintf(pointer_to_a_file, format_specifier, text);
    fprintf(p_file, "%s", text);

    printf("File was written successfully!\n");

    // The below code closes a file.
    fclose(p_file);

    return 0;
}