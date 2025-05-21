/*
    Type conversion of return keyword
    Htoo Myat
    5/2/2025
*/

#include <stdio.h>

// Return type of the sample function is double
double sample_func(int value);

int main(void)
{
    printf("%lf\n", sample_func(10));
    return 0;
}

double sample_func(int value)
{
    return (value*10);
}