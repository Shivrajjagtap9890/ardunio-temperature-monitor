#include <stdio.h>

void main()
{
    int rotations;
    float distance_per_rotation, total_distance;

    printf("Enter number of wheel rotations: ");
    scanf("%d", &rotations);

    printf("Enter distance covered in one rotation: ");
    scanf("%f", &distance_per_rotation);

    total_distance = rotations * distance_per_rotation;

    printf("Total distance covered = %.2f", total_distance);
}
