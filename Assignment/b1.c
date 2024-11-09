#include <stdio.h>

int main() {
    int n;
    printf("enter a positive integer:\n");//prompt the user for positive integer
    scanf("%d", &n);

    if (n >= 1 && n <= 9) {//setting limit
        const char *words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s\n", words[n - 1]);//creating an array for storing words
    } else {
        printf("Greater than 9\n");
    }

    return 0;
}