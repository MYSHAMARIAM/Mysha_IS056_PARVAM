#include<stdio.h>
void main()
{
    int i=5,j=20;
    while (i < --j)
    {
        printf("I=%d\n",i);
        while (i < --j)
        {
            printf("I=%d\n",i);
            while (1)
            {
                printf("*******\n");
            }
            
        }
        
        
    }
    
}