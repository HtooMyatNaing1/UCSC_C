// Htoo Myat
// 5/13/2025
// Temperature Conversion Program with Assert

#include <assert.h>
#include <stdio.h>

// Function to convert Celsius to Fahrenheit
double celsius_to_fahrenheit(double celsius) {
    // Validate that celsius is within physically possible range
    assert(celsius >= -273.15); // Below absolute zero is impossible
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main(void) {
    double c;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &c);

    double f = celsius_to_fahrenheit(c);
    printf("%.2f°C is %.2f°F\n", c, f);

    // Simple test case
    assert(celsius_to_fahrenheit(0) == 32.0);
    assert(celsius_to_fahrenheit(100) == 212.0);

    return 0;
}
