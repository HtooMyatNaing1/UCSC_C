/*
    Calculating the volume of spheres
    Htoo Myat
    5/1/2025
*/

#include <stdio.h>
#define PI 3.14159

int main(void)
{ 
    double radius = 0.0f;
    printf("Enter radius:");
    scanf("%lf", &radius);
    printf("volume is : %lf \n\n", 4*(PI*radius*radius*radius)/3);
    return 0;
}