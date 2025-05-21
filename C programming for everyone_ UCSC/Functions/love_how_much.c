/*
    Love you so much using functions
    Htoo Myat
    5/2/2025
*/

#include <stdio.h>

void write_very(int times);

int main(void)
{
    // variable initialization
    int count = 0;

    // Asking for user input
    printf("How strong is your love (1-10): ");
    scanf("%d", &count);

    write_very(count);
    return 0;
}

void write_very(int times)
{
    times = (times <= 0) ? (1) : (times > 10) ? (10) : (times);
    printf("\nI love you");
    while (times > 0)
    {
        printf(" very");
        times--;
    }
    printf(" much.\n\n");
}