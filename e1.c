#include<stdio.h>
void main()
{
    int t=700;
    int *r=&t;
    printf("%d \n",t);
    printf("%d\n",*r);
    t++;
    (*r)++;
    printf("%d \n",t);
    printf("%d\n",*r);// refers to the value of t
    printf("%x\n",r);//contains the address of t gives hexadecimal value
    printf("%x\n",&t);//address of t
    printf("%x\n",&r);//address of r
    
}