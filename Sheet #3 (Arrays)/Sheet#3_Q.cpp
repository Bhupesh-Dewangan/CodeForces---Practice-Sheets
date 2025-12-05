#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];

        long long result = 0;
        long long length = 1; // every element itself is a non-decreasing subarray

        for (int i = 1; i < N; i++) {
            if (A[i] >= A[i-1]) {
                length++;  // extend current non-decreasing streak
            } else {
                result += (length * (length + 1)) / 2;
                length = 1;  // reset streak
            }
        }

        // add last streak
        result += (length * (length + 1)) / 2;

        cout << result << "\n";
    }
    return 0;
}

