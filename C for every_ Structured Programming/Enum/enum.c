/*
    Enum in C 
    Htoo Myat
    5/12/2025
*/

// Preprocessor directives
#include <stdio.h>

// Enum type
enum day{SUN, MON, TUE, WED, THU, FRI, SAT}; // declare type

// Function prototypes
void print_day(enum day d);
enum day next_day(enum day d);

// Main function
int main(void)
{
    enum day today = FRI;
    print_day(today);
    printf("\n\n");
    print_day(7);
    printf("\n\n");
    print_day(next_day(today));
    printf("\n\n");
    return 0;
}

// Printing the day
void print_day(enum day d)
{
    switch (d)
    {
    case SUN:
        printf("Sunday\n");
        break;
    case MON:
        printf("Monday\n");
        break;
    case TUE:
        printf("Tuesday\n");
        break;
    case WED:
        printf("Wednesday\n");
        break;
    case THU:
        printf("Thursday\n");
        break;
    case FRI:
        printf("Friday\n");
        break;
    case SAT:
        printf("Saturday\n");
        break;
    default:
        printf("%d is an error.", d);
        break;
    }
}

enum day next_day(enum day d)
{
    return ((d + 1) % 7);
}