/*
    Int in C programming (Basic datatypes)
    Htoo Myat
    5/1/2025
*/

#include<stdio.h>

int main(void)
{
    short short_a = 5;
    int normal_a = 67;
    long long_a = 67L; // also works with small l 67l
    unsigned unsigned_a = 67U; // also works with small u 67u

    printf("short_a = %hd, divide by int 2 is %d\n", short_a, short_a/2);
    printf("short_a = %hd, divide by float 2.0 is %lf\n", short_a, short_a/2.0);
    printf("67 as a char is %c\n", normal_a);
    printf("Sizes in bytes of short, int, unsigned, long on this machine: ");
    printf("%lu, %lu, %lu, %lu\n", sizeof(short_a), sizeof(normal_a), sizeof(unsigned_a), sizeof(long_a)); 
    // sizeof returns size_t (long int or unsigned) so using %d here can result in incorrect values 
    // so using %lu(unsigned long) gurantees the safety
    return 0;
}