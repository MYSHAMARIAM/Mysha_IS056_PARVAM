#include <stdio.h>
void main()
{
    int a;
    int b;
    printf("Enter two numbers a and b: ");
    scanf("%d%d", &a, &b);

    if (a == b)
    {
        printf("a and b are equal\n");
    }
    if (a != b)
    {
        printf("a and b are not equal\n");
    }
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    if (a < b)
    {
        printf("b is greater than a\n");
    }
    if (a >= b)
    {
        printf("a is greater than or equal to b\n");
    }
    if (a <= b)
    {
        printf("b is greater than or equal to a\n");
    }
}
