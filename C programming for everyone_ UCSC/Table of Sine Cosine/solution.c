/*
    Program that has a function that prints a table of values for sine and cosine between (0, 1). 
    Htoo Myat
    5/5/2025
*/

// Preprocessor directives
#include <stdio.h> // For input/output functions
#include <math.h> // For sin() cos() functions

int main(void) // main function
{
    double start_val = 0.0;
    double end_val = 1.0;

    for (start_val = 0.0; start_val <= end_val; start_val = start_val + 0.0001) // This will loop with 0.0001 precision (4 decimal place)
    {
        printf("sin(%.4lf) = %.4lf\tcos(%.4lf) = %.4lf\n", start_val, sin(start_val), start_val, cos(start_val));
    }

    return 0;
}