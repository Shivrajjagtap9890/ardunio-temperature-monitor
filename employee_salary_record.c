#include <stdio.h>

struct Employee
{
    int employeeId;
    char name[50];
    float basicSalary;
};

void main()
{
    struct Employee e;
    float bonus, totalSalary;

    printf("Enter employee ID: ");
    scanf("%d", &e.employeeId);

    printf("Enter employee name: ");
    scanf(" %49[^\n]", e.name);

    printf("Enter basic salary: ");
    scanf("%f", &e.basicSalary);

    bonus = e.basicSalary * 0.10;
    totalSalary = e.basicSalary + bonus;

    printf("\nEmployee Details\n");
    printf("ID: %d\n", e.employeeId);
    printf("Name: %s\n", e.name);
    printf("Basic Salary: %.2f\n", e.basicSalary);
    printf("Salary with 10%% bonus: %.2f", totalSalary);
}
