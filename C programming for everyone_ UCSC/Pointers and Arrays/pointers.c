/*
    Pointer Code Example
    Htoo Myat
    5/8/2025
*/

#include <stdio.h>
#define ARR_SIZE 5

int main(void)
{
    int grades[ARR_SIZE] = {78, 80, 99, 89, 100};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;

    printf("\nMy grades are: \n");

    for (i = 0; i < ARR_SIZE; i++){
        printf("%d\t", grades[i]);
        sum = sum + grades[i];
    }

    printf("\n\nMy average is %.2lf\n\n", sum/ARR_SIZE);

    printf("Sum is at %p, or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
    printf("Grades are from %lu to %lu.\n", grades, grades+5);

    return 0;
}