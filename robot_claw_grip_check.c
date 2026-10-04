#include <stdio.h>

void main()

{

    float grip;

    printf("Enter robot claw grip value: ");

    scanf("%f", &grip);

    if (grip < 20)

    {

        printf("Action: Grip Object");

    }

    else if (grip <= 60)

    {

        printf("Action: Hold Object");

    }

    else

    {

        printf("Action: Release Object");

    }

}
