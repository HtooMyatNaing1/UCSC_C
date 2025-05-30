/*
    Introduction to C++ Programming
    by Htoo Myat
    5/28/2025
*/

#include <iostream>

using namespace std;

const double mile_to_km = 1.60934; // Conversion factor from miles to kilometers
const double km_to_mile = 0.621371; // Conversion factor from kilometers to miles

inline double convert_miles_to_km(double miles) {
    return miles * mile_to_km;
}

int main() {
    double miles = 1.0; // Example distance in miles

    while (miles != 0) {
        cout << "Input distance in miles (0 to exit): ";
        cin >> miles;
        cout << "\nDistance in kilometers: " << convert_miles_to_km(miles) << " km" << endl;
    }

    cout << endl;
    return 0;
}