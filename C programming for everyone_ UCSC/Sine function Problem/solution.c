/*
    Problem: Write a program that can give the sine of a value between 0 and 1 (non inclusive).
    Htoo Myat
    5/1/2025
*/

#include <stdio.h>
#include <math.h> // header file for using sin() function

int main(void)
{
    // Initialization of variables
    double user_val = 0.0;
    double result = 0.0;

    // Ask user for input between 0 and 1 (not inclusive)
    printf("Enter a value between 0 and 1 (not inclusive): ");
    scanf("%lf", &user_val);

    // Check range if the value is between 0 and 1
    if (user_val >= 1 || user_val <= 0) { 
        // 0 and 1 are not inclusive so we need to check if the value is not equal to 1 and 0 too

        printf("Error: The input value must be between 0 and 1 (not inclusive).\n");
        return 1;
    }

    // Calculate and print the result
    result = sin(user_val);
    printf("sin(%.4lf) = %.4lf\n", user_val, result);

    return 0;
}