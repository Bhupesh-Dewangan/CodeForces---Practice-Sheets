#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // Sort in descending order
    sort(a.begin(), a.end(), greater<long long>());

    long long sum = 0;
    for(int i = 0; i < k; i++) {
        if(a[i] > 0) sum += a[i];  // Only add positive values
    }

    cout << sum << endl;
    return 0;
}

