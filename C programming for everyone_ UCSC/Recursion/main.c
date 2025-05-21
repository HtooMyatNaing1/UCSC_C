/*
    Recursion-factorial in C programming
    Htoo Myat
    5/8/2025
    n! = 1 * 2 * 3 * ... n
*/

#include <stdio.h>

// long allows it to work up to 20

long int factorial(int n);
long int recursive_factorial(int n);

int main(void)
{
    int how_many = 0, i;
    printf("I want table of factorial up to n: ");
    scanf("%d", &how_many);
    printf("\n Iterative Factorials\n");
    for (i = 1; i <= how_many; i++)
    {
        printf("\n%d\t %ld\n", i, factorial(i));
    }
    printf("\n\n");
    printf("\n Recursive Factorials\n");
    for (i = 1; i <= how_many; i++)
    {
        printf("\n%d\t %ld\n", i, recursive_factorial(i));
    }
    printf("\n\n");
    
    return 0;
}

long int factorial(int n)
{
    long f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

long int recursive_factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return (recursive_factorial(n-1) * n);
}