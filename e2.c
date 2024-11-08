#include<stdio.h>
void main()
{
    int t=700;
    int *p=&t;
    int **pptr=&p;
    printf("%d\t%d\t%d\n",t,*p,**pptr);//3 ways f accessing same value
    (**pptr)++;
    printf("%d\t%d\t%d\n",t,*p,**pptr);
    printf("%x\t%x\n",p,&t);
    printf("%X\t%x\n",&p,pptr);//both address of p
    printf("%x\t%x\t",&pptr,&t);
    printf("%x\n",*pptr);
    pptr=NULL;
    printf("-------------------\n");
    printf("%d\n",t);
    printf("*p=%d\n",*p);
    printf("**pptr=%d\n",**pptr);//delinked pptr from p
}