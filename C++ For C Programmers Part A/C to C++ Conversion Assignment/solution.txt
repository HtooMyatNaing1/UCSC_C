// Converting C to C++ Assignment
// by Htoo Myat
// 6/1/2025

/*
Convert this program to C++
*   change to C++ io
*   change to one line comments
*   change defines of constants to const
*   change array to vector<>
*   inline any short function

#include <stdio.h>
#define N 40

void sum(int*p, int n, int d[]) {
    int i;
    *p = 0;
    for(i = 0; i < n; ++i)
        *p = *p + d[i];
}

int main(){
    int i;
    int accum = 0;
    int data[N];
    for(i = 0; i < N; ++i)
        data[i] = i;
    sum(&accum, N, data);
    printf("sum is %d\n", accum); 
    return 0;
}
*/

// C++ version of the program
#include <iostream>
#include <vector>

using namespace std;
const int N = 40;

inline void sum(int &p, int n, int d[]) {
    p = 0;
    for (int i = 0; i < n; ++i) {
        p += d[i];
    }
}

int main() {
    int accum = 0;
    vector<int> data(N);
    
    for (int i = 0; i < N; ++i) {
        data[i] = i;
    }
    
    sum(accum, N, data.data()); // Use .data() to pass the array to the function
    cout << "sum is " << accum << endl; 
    return 0;
}