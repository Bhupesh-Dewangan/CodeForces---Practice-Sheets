#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string N_str;
    cin >> N_str;
 
    // Case 1: If N fits into 10^9, we can output (N, 0)
    if (N_str.size() <= 9) {  // length ≤ 9 means N <= 999999999
        long long N = stoll(N_str);
        if (N <= 1000000000LL) {
            cout << N << " " << 0 << "\n";
            return 0;
        }
    }
 
    // Case 2: For large N, fall back to (0, 0), always valid
    cout << 0 << " " << 0 << "\n";
    return 0;
}
