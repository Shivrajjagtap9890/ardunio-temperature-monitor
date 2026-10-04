#include <stdio.h>

void main()

{

    int minutes, hours;

    printf("Enter charging time in minutes: ");

    scanf("%d", &minutes);

    hours = minutes / 60;

    printf("Charging time = %d hours", hours);

}
