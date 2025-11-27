#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    long long x;
    int maxCount = 0;
 
    for (int i = 0; i < n; i++) {
        cin >> x;
        // count trailing zeros (faster than loop)
        int count = __builtin_ctzll(x);  
        maxCount = max(maxCount, count);
    }
 
    cout << maxCount << "\n";
    return 0;
}
