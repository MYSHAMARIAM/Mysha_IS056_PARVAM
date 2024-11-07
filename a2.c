#include <stdio.h>
#include <stdlib.h>


int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random ASCII value between 65 and 90
    int asciiValue = (rand() % 26) + 65; // 26 letters from 'A' to 'Z'

    // Convert to lowercase
    char lowercaseChar = asciiValue + 32;

    // Print the results
    printf("Random ASCII value: %d\n", asciiValue);
    printf("The corresponding lowercase character is: %c\n", lowercaseChar);

    return 0;
}

    
