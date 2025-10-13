#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k, a;
    cin >> n >> k >> a;
 
    long long mul = n * k;  // safe in long long
    if (mul % a == 0) { // perfectly divisible → integer
        long long result = mul / a;
        if (result >= INT_MIN && result <= INT_MAX)
            cout << "int\n";
        else
            cout << "long long\n";
    } else {
        cout << "double\n";
    }
 
    return 0;
}
