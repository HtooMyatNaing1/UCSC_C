/*
    Storage Class
    Htoo Myat
    5/7/2025
*/

#include <stdio.h>

int reps = 0;

void func(void)
{
    static int called = 0;
    printf("func called %d\n", called);
    called++;
    reps = reps + called;
}

int main(void)
{
    auto int i = 1;
    const int limit = 10;
    for (i = 1; i < limit; i++){
        printf("i local = %d, reps global = %d\n", i, reps);
        func();
    }
    return 0;
}