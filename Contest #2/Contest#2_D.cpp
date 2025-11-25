#include <bits/stdc++.h>
using namespace std;
 
long long sumUpto(long long n) {
    return n * (n + 1) / 2;
}
 
int main() {
 
    int T;
    cin >> T;
    while (T--) {
        long long L, R;
        cin >> L >> R;
        if (L > R) swap(L, R);   // ensure L <= R
        long long ans = sumUpto(R) - sumUpto(L - 1);
        cout << ans << "\n";
    }
    return 0;
}
