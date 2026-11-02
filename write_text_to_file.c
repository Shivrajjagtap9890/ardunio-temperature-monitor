#include <stdio.h>

void main()
{
    FILE *file;
    char text[100];

    file = fopen("notes.txt", "w");

    if (file == NULL)
    {
        printf("Unable to create the file.");
    }
    else
    {
        printf("Enter a line to save: ");
        fgets(text, sizeof(text), stdin);

        fputs(text, file);
        fclose(file);

        printf("Text saved in notes.txt");
    }
}
