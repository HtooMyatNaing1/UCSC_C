/*
    Using Simple Arrays as Parameters
    Htoo Myat
    5/8/2025
*/

#include <stdio.h>
#define SIZE 5

double average_grades(int how_many, int grades[])
{
    int i;
    double sum = 0.0;

    for (i = 0; i < how_many; i++){
        sum += grades[i];
    }
    return (sum/how_many);
}

void print_grades(int how_many, int grades[])
{
    int i;

    printf("I have %d grades\n", how_many);
    for (i = 0; i < how_many; i++){
        printf("%d\t", grades[i]);
    }
}

int main(void)
{
    int grades[SIZE] = {78, 67, 93, 85, 90};

    print_grades(SIZE, grades);
    printf("\n\n");
    printf("My average is %.2lf\n\n", average_grades(SIZE, grades));

    return 0;
}