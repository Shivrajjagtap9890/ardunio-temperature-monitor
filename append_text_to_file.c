#include <stdio.h>

void main()
{
    FILE *file;
    char text[100];

    file = fopen("notes.txt", "a");

    if (file == NULL)
    {
        printf("Unable to open the file.");
    }
    else
    {
        printf("Enter text to append: ");
        fgets(text, sizeof(text), stdin);

        fputs(text, file);
        fclose(file);

        printf("Text added to notes.txt");
    }
}
