/*
    Character counter program using
    For loop in C
    Htoo Myat
    5/2/2025
*/

#include <stdio.h>

int main(void)
{
    // Initialize the variables
    int blanks = 0, digits = 0, total_chars = 0;
    int character = 0; // Used for int values of characters

    for (; (character = getchar()) != EOF; total_chars++)
    {
        if (character == ' ') ++blanks;
        else if (character >= '0' && character <= '9') ++digits;
    }

    printf("\nDigits = %d\nBlanks = %d\nTotal characters = %d\n", digits, blanks, total_chars);

    return 0;
}