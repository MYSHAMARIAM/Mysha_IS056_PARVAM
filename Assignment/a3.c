#include <stdio.h>

int main() {
    int hex;
    
    // Input: hexadecimal value (0 to FFFF)
    printf("Enter a hexadecimal value (0 to FFFF): ");
    scanf("%x", &hex);

    // Check if the input is within the 4-digit hexadecimal range
    if (hex > 0xFFFF) {
        printf("Input is out of the 4-digit hexadecimal range.\n");
        return 1;
    }

    // Output the values with a width of 5 characters, padded if necessary
    printf("%5d\n", hex);      // Decimal representation
    printf("%5o\n", hex);      // Octal representation
    printf("%5X\n", hex);      // Uppercase hexadecimal representation

    return 0;
}