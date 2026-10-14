#include <stdio.h>

void main()
{
    int n, i, count = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                count++;
            }
        }

        printf("There are %d even numbers from 1 to %d.", count, n);
    }
    else
    {
        printf("Please enter a positive number.");
    }
}
