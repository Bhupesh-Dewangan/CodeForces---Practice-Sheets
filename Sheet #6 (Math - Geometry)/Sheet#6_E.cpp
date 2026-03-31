#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;
    
    long long left = 0, right = 2e9; // since k ~ sqrt(2N) and sqrt(2*1e18) < 1.5e9
    long long ans = 0;
    
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (mid * (mid + 1) / 2 <= N) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    cout << ans << endl;
    return 0;
}
