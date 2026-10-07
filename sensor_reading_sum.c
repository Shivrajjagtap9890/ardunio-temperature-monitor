#include <stdio.h>

void main()
{
    int n, i, reading, total = 0;

    printf("Enter number of sensor readings: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter reading %d: ", i);
        scanf("%d", &reading);
        total = total + reading;
    }

    printf("Total sensor reading = %d", total);
}