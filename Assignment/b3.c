#include <stdio.h>

void main()
{
    int age, monthly_income;
    printf("Enter age and monthly income: ");
    scanf("%d %d", &age, &monthly_income);

    if (age < 18)
    {
        printf("Age must be 18 or older to qualify\n");
    }
    else if (age >= 18 && age <= 25 && monthly_income >= 5000)
    {
        printf("Eligible\n");
    }
    else if (age >= 26 && age <= 40 && monthly_income >= 10000)
    {
        printf("Eligible\n");
    }
    else if (age > 40 && age <= 60 && monthly_income >= 15000)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}
