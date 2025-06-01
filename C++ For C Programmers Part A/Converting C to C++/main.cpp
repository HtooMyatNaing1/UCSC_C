// The following program computes the probability for dice possibilities
// By Htoo Myat
// 5/31/2025

#include <iostream>
#include <cstdlib>
#include <ctime>

// using namespace std;

const int sides = 6; // Replaces many marcros with #define as in C

inline int r_sides() {
    return rand() % sides + 1; // Generates a random number between 1 and 6
}

int main(void) {
    const int n_dice = 2; // Number of dice
    int d1, d2; // Variables to hold the values of the dice
    srand(clock()); // Seed the random number generator with the current time
    std::cout << "\nEnter the number of trials: ";
    int trials;
    std::cin >> trials; // Read the number of trials from user input
    int *outcomes = new int[n_dice * sides + 1];

    for (int j = 0; j < trials; ++j) {
        outcomes[(d1 = r_sides()) + (d2 = r_sides())]++;
    }
    std::cout << "\nThe probability of each outcome is:\n";
    for (int j = 2; j < n_dice * sides + 1; ++j) {
        std::cout << j << ": " << static_cast<double>(outcomes[j]) / trials << std::endl;
    }
    return 0;
}