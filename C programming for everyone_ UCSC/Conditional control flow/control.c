/*
    if and relations and control flow
    Htoo Myat
    5/1/2025
*/

#include <stdio.h>

int main(void)
{
    // Variable initialization
    int speed = 0;

    // Taking user input
    printf("\nEnter your speed as an integer: ");
    scanf("%d", &speed);

    // Control flow using conditional statement "if"
    if (speed <= 65) {
        printf("\nNo speeding ticket.\n");
    }else{
        printf("\nSpeeding ticket.\n");
    }
    
    return 0;
}