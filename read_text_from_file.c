#include <stdio.h>

void main()
{
    FILE *file;
    int character;

    file = fopen("notes.txt", "r");

    if (file == NULL)
    {
        printf("File not found. Run the write program first.");
    }
    else
    {
        printf("File contents:\n");

        while ((character = fgetc(file)) != EOF)
            putchar(character);

        fclose(file);
    }
}
