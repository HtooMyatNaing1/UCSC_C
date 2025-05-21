/*
    Fixing Dr.P's Mistakes in the code
    Htoo Myat
    5/4/2025
*/

#include <stdio.h>
#include <math.h> /* has  sin(), abs(), and fabs() */

int main(void)
{ 
    double interval;
    int i;
    for(i = 0; i <30; i++)
    {
        interval = i/10.0;
        printf("sin( %lf ) = %lf \t", interval, fabs(sin(interval)));
    }

    printf("\n+++++++\n");
    return 0;
}