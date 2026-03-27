#include <iostream>
using namespace std;

bool isPowerOfTwo(long long n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    long long num;
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}

