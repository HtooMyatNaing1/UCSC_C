/*
    Arrays in C
    Htoo Myat
    5/8/2025
*/

#include <stdio.h>
#define SIZE 5

int main(void)
{
    int grades[SIZE] = {78, 67, 99, 83, 82};
    double sum = 0.0;
    int i;

    printf("\nMy grades are:\n");
    for (i = 0; i < SIZE; i++){
        printf("%d\t", grades[i]);
    }
    printf("\n\n");

    for (i = 0; i < SIZE; i++){
        sum = sum + grades[i];
    }

    printf("My average is %.2f\n\n", sum/SIZE);

    return 0;
}