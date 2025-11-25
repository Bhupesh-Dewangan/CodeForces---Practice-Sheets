#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int N, K;
    cin >> N >> K;
 
    vector<long long> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
 
    for (int i = 0; i < N; i += K) {
        long long mn = arr[i];
        for (int j = i; j < min(i + K, N); j++) {
            mn = min(mn, arr[j]);
        }
        cout << mn << " ";
    }
    cout << "\n";
 
    return 0;
}
