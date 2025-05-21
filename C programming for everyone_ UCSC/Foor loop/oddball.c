/*
    Ternary Operators
    Htoo Myat
    5/2/2025
*/

#include <stdio.h>

int main(void)
{
    int speed = 0;
    printf("Enter your speed as an integer: ");
    scanf("%d", &speed);

    speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);

    switch (speed)
    {
        case 65:
            printf("\nNo speeding ticket.\n\n");
            break;
        case 70:
            printf("\nSpeeding ticket.\n\n");
            break;
        case 90:
            printf("\nExpensive speeding ticket.\n\n");
            break;
        default:
            printf("\nIncorrect input.\n\n"); // Not really needed in this context
            break;
    }

    return 0;
}