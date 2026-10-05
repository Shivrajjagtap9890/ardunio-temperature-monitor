#include <stdio.h>

void main()

{

    float slip;

    printf("Enter wheel slip value: ");

    scanf("%f", &slip);

    if (slip < 5)

    {

        printf("Wheel Status: Stable");

    }

    else if (slip <= 15)

    {

        printf("Wheel Status: Check");

    }

    else

    {

        printf("Wheel Status: Slipping");

    }

}