#include <iostream>
using namespace std;

// Function to compute X^p manually (no built-in function)
long long power(int x, int p) {
    long long result = 1;
    for (int i = 1; i <= p; i++) {
        result *= x;
    }
    return result;
}

// Function to compute S
long long computeSum(int X, int N) {
    long long S = 0;

    for (int p = 0; p <= N; p += 2) {   // only even powers
        if (p == 0)
            S += (power(X, 0) - 1);     // X^0 - 1 = 0
        else
            S += power(X, p);
    }
    return S;
}

int main() {
    int X, N;
    cin >> X >> N;
    
    cout << computeSum(X, N) << endl;
    return 0;
}

