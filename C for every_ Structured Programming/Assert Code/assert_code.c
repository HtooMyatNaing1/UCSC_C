/*
    Use Assert in a program
    Htoo Myat
    5/13/2025
*/

#define NDEBUG // goes before assert.h
// This line turns off all the assert code
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // assert(1); // assert(0); the program fails
    assert(0);
    printf("My program runs.\n");
    return 0;
}