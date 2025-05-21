/*
    Struct and Enum Assignment (General Problem)
    by Htoo Myat
    5/21/2025
*/

#include <stdio.h>

// Enumerated months
typedef enum month {
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} month;

// Struct for date
typedef struct date {
    month m;
    int d;
} date;

// Numbers of days in each month
// Non-leap year
int days_in_month[] = {
    31, 28, 31, 30, 31, 30,
    31, 31, 30, 31, 30, 31
};

// List of month names
char *month_names[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

// Print the date in the format "Month Day"
void print_date(date current_day)
{
    printf("%s %d\n", month_names[current_day.m], current_day.d);
}

// Getting the next day of the current date
date next_day(date current_day)
{
    date next_day = current_day;
    next_day.d++;
    if (next_day.d > days_in_month[current_day.m]) {
        next_day.d = 1;
        next_day.m++;
        if (next_day.m > DEC) {
            next_day.m = JAN;
        }
    }
    return next_day;
}

// main function
int main(void)
{
    // Test cases
    date dates[] = {
        {JAN, 1},
        {FEB, 28},
        {MAR, 14},
        {OCT, 31},
        {DEC, 31}
    };

    int number_of_test_cases = sizeof(dates) / sizeof(dates[0]); // For looping count

    for (int i = 0; i < number_of_test_cases; i++)
    {
        date current_day = dates[i];
        printf("Current date: ");
        print_date(current_day);
        date next = next_day(current_day);
        printf("Next date: ");
        print_date(next);
    }
    return 0;
}

