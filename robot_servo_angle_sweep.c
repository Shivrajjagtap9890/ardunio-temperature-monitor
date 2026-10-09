#include <stdio.h>

void main()
{
    int angle;

    printf("Robot Servo Angle Sweep\n");

    for (angle = 0; angle <= 90; angle = angle + 15)
    {
        printf("Servo position: %d degrees\n", angle);
    }

    printf("Servo sweep completed.\n");
}
