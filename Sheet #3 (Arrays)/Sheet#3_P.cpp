#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++) cin >> A[i];

    int minCount = INT_MAX;

    for (int i = 0; i < N; i++) {
        int cnt = 0;
        while (A[i] % 2 == 0) {
            A[i] /= 2;
            cnt++;
        }
        minCount = min(minCount, cnt);
    }

    cout << minCount << endl;
    return 0;
}

