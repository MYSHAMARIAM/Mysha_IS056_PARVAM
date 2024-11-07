#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Enter four integers: ");
    scanf("%d %d %d", &a, &b, &c); 
    
    if (a>b&&a>c)
    {
        printf("a bada");
    }
    else if (b>a&&b>c)
    {
    printf("b bada");
    }
    else
    {
        printf("c bada");
    }
    return 0;
}
