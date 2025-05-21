/*
    Love you How Much Program
    Htoo Myat
    5/2/2025
*/

#include <stdio.h>

int main(void)
{
    // Initialization
    int count = 0;
    printf("How strong is your love? (1-10): ");
    scanf("%d", &count);

    printf("I love you very");
    while (count > 0)
    {
        printf("\n  very");
        count--;
    }
    printf(" much.\n\n");
    return 0;
}