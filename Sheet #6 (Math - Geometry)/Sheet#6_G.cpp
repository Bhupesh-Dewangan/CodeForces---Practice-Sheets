#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = 0;

    for (long long i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            sum += i;              // first divisor
            if (i != N / i) {
                sum += N / i;      // paired divisor
            }
        }
    }

    cout << sum << endl;
    return 0;
}

