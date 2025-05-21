#include <stdio.h>

int main(void)
{
    int i = 0;
    printf("Inside the loop:");
    for(i = 0; i < 3; i++)
    {
        printf("%d\n", i);
    }
    printf("Outside the loop:");
    printf("%d\n", i);
    return 0;
}