#include <bits/stdc++.h>
using namespace std;
 
int main() {

    long long K, S;
    if (!(cin >> K >> S)) return 0;
    
    long long ans = 0;
    for (long long x = 0; x <= K; ++x) {
        long long L = max(0LL, S - x - K);
        long long R = min(K,   S - x);
        if (L <= R) ans += (R - L + 1);
    }
    cout << ans << '\n';
    return 0;
}


