#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    bool first = true;

    for (long long i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            int count = 0;
            while (N % i == 0) {
                N /= i;
                count++;
            }
            if (!first) cout << "*";
            cout << "(" << i << "^" << count << ")";
            first = false;
        }
    }

    // If N is still greater than 1, it is a prime factor
    if (N > 1) {
        if (!first) cout << "*";
        cout << "(" << N << "^1)";
    }

    return 0;
}
