#include <stdio.h>

int main() {
    char ch;
    
    // Prompt user to enter a character
    printf("Enter a letter: ");
    scanf(" %c", &ch);  // Read a single character
    
    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;  // Convert to lowercase by adding 32
        printf("Converted letter: %c\n", ch);
    }
    // Check if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        ch = ch - 32;  // Convert to uppercase by subtracting 32
        printf("Converted letter: %c\n", ch);
    }
    else
    {
        printf("invalid input!");
    }
    
    return 0;
}
