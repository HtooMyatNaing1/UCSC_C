//

#include <iostream>

using namespace std;

template <class Summable>
// Summable is a generic type that can be summed
Summable sum(const Summable data[], int size, Summable s = 0) {
    for (int i = 0; i < size; ++i) {
        s += data[i];
        // += must work for Summable type
    }
    return s;
}

int main() {
    int data[] = {1, 2, 3, 4, 5};
    double ddata[] = {1.1, 2.2, 3.3};
    cout << "Sum of integers: " << sum(data, 5) << endl;
    cout << "Sum of doubles: " << sum(ddata, 3) << endl;
    
    return 0;
}