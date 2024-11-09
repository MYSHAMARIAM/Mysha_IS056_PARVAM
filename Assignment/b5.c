#include <stdio.h>

void main()
{
    int units;
    float bill = 0;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units <= 100) // units <= 100, cost is 5 per unit
    {
        bill = units * 5;
    }
    else if (units <= 200)// units > 100 and <= 200
    //first 100 unit * 5 , second * 8
    {
        bill = (100 * 5) + (units - 100) * 8;
    }
    else// For units > 200
    {
        //first 100 * 5 second 100* 8 third left * 10 
        bill = (100 * 5) + (100 * 8) + (units - 200) * 10;
    }

    printf("The electricity bill is: %.2f\n", bill);
}
