/*
    char in C programming
    Htoo Myat
    5/1/2025
*/

#include <stdio.h>
#include <windows.h>

int main(void)
{
    char char_a = 'a';

    printf("a in ASCII is %d\n", char_a);
    printf("a the character is %c\n", char_a);
    printf("The three consecutive characters: %c %c %c\n", char_a, char_a+1, char_a+2);
    printf("Three bell ring characters are: %c %c %c\n", '\a', '\a', '\a');
    Beep(750, 300); // Beep sound using windows.h
    return 0;
}