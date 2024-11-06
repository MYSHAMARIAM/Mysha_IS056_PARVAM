#include<stdio.h>
int main()
{
    int i=5,j=15;
    do
    {
        while (j >=5)
        {
            j--;
        }
        i++;
    } while (i <= j);
    printf("%d\n",i*j);//12 loops
}