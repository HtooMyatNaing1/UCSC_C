/*
    Simple Bubble sorting algorithm in C
    Htoo Myat 
    5/9/2025
*/

// Preprocessor directives
#include <stdio.h>
#define SIZE 5

// Function prototypes
void swap(int *a, int *b);
void print_array(int how_many, int data[], char *str);
void bubble(int data[], int how_many);

// Main function, entry point of a C program
int main(void)
{
    int grades[SIZE] = {100, 10, 1000, 10000, 102};

    print_array(SIZE, grades, "\nMy grades\n");
    printf("\n\n");
    bubble(grades, SIZE);
    print_array(SIZE, grades, "\nMy sorted grades\n");
    printf("\n\n");
    return 0;
}

// Swapping
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Printing array
void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s", str);

    for (i = 0; i < how_many; i++)
    {
        printf("%d\t", data[i]);
    }
}

// Bubble sort
void bubble(int data[], int how_many)
{
    int i, j;
    int go_on;

    for (i = 0; i < how_many; i++)
    {
        print_array(how_many, data, "\nInside Bubble\n");
        printf("i = %d, input any int to continue: ", i);
        scanf("%d", &go_on);
        for (j = how_many-1; j > i; j--)
        {
            if (data[j-1] > data[j])
            {
                swap(&data[j-1], &data[j]);
            }
        }
    }
}