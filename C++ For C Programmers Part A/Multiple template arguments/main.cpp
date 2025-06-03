// Multiple Template Arguments in C++: This project demonstrates the use of multiple template arguments in C++.
// by Htoo Myat
// 3/6/2025

#include <iostream>

template <class T1, class T2>
void copy(const T1 source[], T2 destination[], int size) {
    for (int i = 0; i < size; ++i) {
        destination[i] = static_cast<T2>(source[i]);
    }
}

int main() {
    const int size = 5;
    int source[size] = {1, 2, 3, 4, 5};
    double destination[size];

    copy(source, destination, size);

    std::cout << "Source array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << source[i] << " ";
    }
    std::cout << "\nDestination array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << destination[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}