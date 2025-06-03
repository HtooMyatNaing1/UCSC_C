//
// Swapping in C++
//
// by Htoo Myat
// 6/1/2025

#include <iostream>

using namespace std;

inline void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

inline void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

// C++ has overloading and call by reference, so we can use the same function name for different types.

int main() {
    int m = 5, n = 10;
    double x = 1.5, y = 2.5;
    cout << "Before swap: m = " << m << ", n = " << n << endl;
    swap(m, n);
    cout << "After swap: m = " << m << ", n = " << n << endl;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    // The output will show that the values of m and n, x and y are swapped correctly.
    cout << "Swapping completed successfully." << endl;
    // The program demonstrates the use of inline functions for swapping values of different types.
    // It shows how C++ allows function overloading and call by reference to achieve this.

    return 0;
}