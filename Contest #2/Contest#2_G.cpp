#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
    while (T--) {
        long long n, s;
        cin >> n >> s;
 
        long long max_sum = n * (n + 1) / 2;
        if (s > max_sum) {
            cout << -1 << "\n";
            continue;
        }
 
        vector<int> result;
        for (int i = n; i > 0; i--) {
            if (s >= i) {
                result.push_back(i);
                s -= i;
            }
        }
 
        for (int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
 
    return 0;
}
