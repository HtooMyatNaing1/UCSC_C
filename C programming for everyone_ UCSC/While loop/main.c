/*
    While loop lesson
    Htoo Myat
    5/2/2025
*/

#include <stdio.h>

int main(void)
{
    // Initialization
    int blanks = 0, digits = 0, letters = 0, others = 0;
    int character = 0; // Used for input values of characters

    while ((character = getchar()) != EOF)
    {
        if (character == ' '){
            ++blanks;
        } else if (character >= '0' && character <= '9') {
            ++digits;
        } else if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z') {
            ++letters;
        } else {
            ++others;
        }
    }

    printf("Blanks = %d\nDigits = %d\nLetters = %d\nOthers = %d\n", blanks, digits, letters, others);

    return 0;
}