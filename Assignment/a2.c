#include<stdio.h>
void main()
{
    float i;
    printf("enter a float point number:\n");//prompt user for input
    scanf("%f",&i);
    int n=(int)i;// typecasting float to integer
    printf("floating point number %.2f\n",i);//printing float value
    printf("integer part after type casting %d\n",n);//printing integer value

}