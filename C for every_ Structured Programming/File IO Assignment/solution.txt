/*

    Task:

    Open and read a file of integers into an array that is created with the first integer telling you how many to read.
    So  4  9  11  12  15  would mean create an int array size 4 and read in the remaining 4 values into data[].
    Then compute their average as a double and their max  as an int.  
    Print all this out neatly to the screen and to an output file named answer-hw3.

    by Htoo Myat
    5/27/2025
*/

// Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

// Function that reads the first integer from a file and returns its address
int *readFirstInt(char filename[]) {
    int *size;
    FILE *fileptr;
    fileptr = fopen(filename, "r");
    if (fileptr == NULL) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    if (fscanf(fileptr, "%d", size) != 1) {
        fprintf(stderr, "Error reading the first integer from file %s\n", filename);
        fclose(fileptr);
        exit(EXIT_FAILURE);
    } else {
        printf("Size of array: %d\n", *size);
    }
    fclose(fileptr);
    return size;
}

// Array Size Function
int *createArrayofSize(char filename[]) {
    int *size = readFirstInt(filename);
    int *data = malloc(*size * sizeof(int));
    return data;
}

// Read Data Function
void readData(char filename[], int *data, int size) {
    FILE *fileptr;
    fileptr = fopen(filename, "r");
    if (fileptr == NULL) {
        fprintf(stderr, "Error opening file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    // Skip the first integer which is the size
    fscanf(fileptr, "%*d");
    for (int i = 0; i < size; i++) {
        if (fscanf(fileptr, "%d", &data[i]) != 1) {
            fprintf(stderr, "Error reading data from file %s\n", filename);
            fclose(fileptr);
            exit(EXIT_FAILURE);
        }
    }
    fclose(fileptr);
}

// Average Function
double computeAverage(int *data, int size) {
    if (size <= 0) {
        fprintf(stderr, "Size must be greater than 0\n");
        return 0.0;
    }
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }
    return sum / size;
}

// Max Function
int computeMax(int *data, int size) {
    if (size <= 0) {
        fprintf(stderr, "Size must be greater than 0\n");
        return 0;
    }
    int max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

// Main function
int main() {
    char filename[] = "inputfile.txt"; // Input file name
    int *data;
    int *size = readFirstInt(filename);
    data = createArrayofSize(filename);
    readData(filename, data, *size);
    printf("Data read from file:\n");
    for (int i = 0; i < *size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    double average = computeAverage(data, *size);
    printf("Average: %.2f\n", average);
    int max = computeMax(data, *size);
    printf("Max: %d\n", max);
    // Write results to output file
    FILE *outputFile = fopen("answer-hw3.txt", "w");
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening output file\n");
        free(data);
        exit(EXIT_FAILURE);
    }
    fprintf(outputFile, "Data read from file:\n");
    for (int i = 0; i < *size; i++) {
        fprintf(outputFile, "%d ", data[i]);
    }
    fprintf(outputFile, "\nAverage: %.2f\n", average);
    fprintf(outputFile, "Max: %d\n", max);
    fclose(outputFile);
    // Free allocated memory
    free(data);
    free(size);
    printf("Results written to answer-hw3.txt\n");
    printf("Program completed successfully.\n");
    // Return success
    printf("Exiting program.\n");
    return 0;
}