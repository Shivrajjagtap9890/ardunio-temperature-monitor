#include <stdio.h>

void main()
{
    FILE *file;
    int character, count = 0;

    file = fopen("notes.txt", "r");

    if (file == NULL)
    {
        printf("File not found. Create notes.txt first.");
    }
    else
    {
        while ((character = fgetc(file)) != EOF)
            count++;

        fclose(file);
        printf("Total characters in notes.txt = %d", count);
    }
}
