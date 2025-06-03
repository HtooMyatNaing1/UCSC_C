//
// Generic programming language: C++
// by Htoo Myat
// 6/1/2025

#include <iostream>
#include <complex>

using namespace std;

template <class T>
void swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int m = 5, n = 10;
    double x = 1.5, y = 2.5;
    complex<double> r(1.0, 2.0), s(3.0, 4.0);
    cout << "inputs: " << m << ", " << n << endl;
    ::swap(m, n);
    cout << "outputs: " << m << ", " << n << endl;
    cout << "inputs: " << x << ", " << y << endl;
    ::swap(x, y);
    cout << "outputs: " << x << ", " << y << endl;
    cout << "inputs: " << r << ", " << s << endl;
    ::swap(r, s);
    cout << "outputs: " << r << ", " << s << endl;
    
    return 0;
}