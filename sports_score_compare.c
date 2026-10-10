#include <stdio.h>

void main()
{
    int teamA, teamB;

    printf("Enter Team A score: ");
    scanf("%d", &teamA);

    printf("Enter Team B score: ");
    scanf("%d", &teamB);

    if (teamA > teamB)
        printf("Team A wins!\n");
    else if (teamB > teamA)
        printf("Team B wins!\n");
    else
        printf("It's a tie!\n");

    printf("Final score: Team A %d - Team B %d\n", teamA, teamB);
}