#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, X;
    cin >> A >> B >> X;

    long long L = min(A, B);
    long long R = max(A, B);

    // Find first multiple of X >= L
    long long first = ((L + X - 1) / X) * X;

    // Find last multiple of X <= R
    long long last = (R / X) * X;

    if (first > last) {
        cout << 0 << endl;
        return 0;
    }

    long long n = (last - first) / X + 1;
    long long sum = n * (first + last) / 2;

    cout << sum << endl;
    return 0;
}

