#include<stdio.h>
// function definition
void sum (int n1,int n2)
{
   // while (n1 <200 && n2< 300)
        int c = n1+n2;
        printf("res=%d",c);
        n1++,n2++;
        sum(n1,n2);
}
void main()
{
    int a,b;
    printf("enter no.\n");
    scanf("%d%d",&a,&b);
        sum(a,b);//function call
    printf("two number added\n");
    
}
