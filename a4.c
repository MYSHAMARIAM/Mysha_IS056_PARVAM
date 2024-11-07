#include <stdio.h>

int main() {
    int gfg;
    printf("Enter gfg: ");
    scanf("%d", &gfg);

    if (gfg < 10) {
        puts("\nThe value is less than 10.");
    } 
    else {
        puts("\nThe value is greater than 10 .");
    }
    if ( gfg %2==0)
    {
        printf("e");
    }
    else{
        printf("o");
    }
    

    return 0;
}
