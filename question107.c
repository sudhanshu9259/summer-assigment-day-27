#include <stdio.h>

struct Salary
{
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main()
{
    struct Salary s[100];
    int n = 0, choice, i;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &s[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", s[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &s[n].basic);

            printf("Enter HRA: ");
            scanf("%f", &s[n].hra);

            printf("Enter DA: ");
            scanf("%f", &s[n].da);

            s[n].total = s[n].basic + s[n].hra + s[n].da;

            n++;

            printf("Salary Record Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No Salary Records!\n");
            }
            else
            {
                printf("\nID\tName\tBasic\tHRA\tDA\tTotal\n");

                for (i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                           s[i].id,
                           s[i].name,
                           s[i].basic,
                           s[i].hra,
                           s[i].da,
                           s[i].total);
                }
            }
            break;

        case 3:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }
}