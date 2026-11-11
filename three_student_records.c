#include <stdio.h>

struct Student
{
    int rollNumber;
    char name[40];
    float marks;
};

void main()
{
    struct Student students[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details for student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf(" %39[^\n]", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent Records\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nRoll number: %d", students[i].rollNumber);
        printf("\nName: %s", students[i].name);
        printf("\nMarks: %.2f\n", students[i].marks);
    }
}
