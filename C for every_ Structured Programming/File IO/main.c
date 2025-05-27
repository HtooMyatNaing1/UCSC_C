/*
    Use of File I/O
    by Htoo Myat
    5/24/2025
*/

#include <stdio.h>
#define MAX_HW 20

void read_data(FILE *fptr, int data[], int *size) {
    *size = 0;
    while (fscanf(fptr, "%d", &data[*size]) == 1 && *size < MAX_HW) {
        (*size)++;
    }
}

void print_data(int data[], int size) {
    int i;
    for (i = 0; i < size; i++){
        printf("%d\t ", data[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}

double average(int data[], int size) {
    int i;
    double sum = 0.0;
    for (i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

int main() {
    int i, size = MAX_HW;
    int data[MAX_HW] = {100, 0};
    FILE *fptr;

    fptr = fopen("data.txt", "r");
    read_data(fptr, data, &size);

    printf("My %d homework scores are:", size);
    print_data(data, size);
    printf("\nThe average score is: %10f\n", average(data, size));
    printf("\n\n");
    fclose(fptr);
    return 0;
}