/*
    Logical Operators and Short-circuit Evaluation
    Htoo Myat
    5/1/2025
*/

#include <stdio.h>

int main(void)
{
    // Initialization
    int outside = 0, weather = 0;

    // User inputs
    printf("\nEnter 1 if you are outside, 0 if not: ");
    scanf("%d", &outside);
    printf("\nEnter 1 if it rains, 0 if not: ");
    scanf("%d", &weather);

    if (outside && weather) {
        printf("\nHey! Don't forget to use the umbrella.\n");
    }else {
        printf("\nDress normally\n");
    }
    
    return 0;
}