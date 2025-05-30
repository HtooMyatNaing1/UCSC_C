/*
    Some Easy-to-use C++ Features
    by Htoo Myat
    5/30/2025
*/

#include <iostream>

using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main(void) {
    cout << "This program uses some features not in C89.\n";

    for (auto i = 0; i < 16; i++) {
        // Using auto keyword for type inference
        cout << "Factorial of " << i << " is " << factorial(i) << endl;
    }

    return 0;
}