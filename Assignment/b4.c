#include <stdio.h>

void main()
{
    int n;
    printf("Enter your score: ");
    scanf("%d", &n);

    if (n >= 90)
    {
        printf("A\n");
    }
    else if (n >= 80 && n <= 89)
    {
        printf("B\n");
    }
    else if (n >= 70 && n <= 79)
    {
        printf("C\n");
    }
    else if (n >= 60 && n <= 69)
    {
        printf("D\n");
    }
    else if (n < 60)
    {
        printf("F\n");
    }
    else
    {
        printf("Invalid score\n");
    }
}
