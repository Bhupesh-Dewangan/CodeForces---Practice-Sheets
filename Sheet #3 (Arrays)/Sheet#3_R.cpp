#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    unordered_map<int, int> freq;

    // Count frequency of elements in A
    for (int x : A) {
        freq[x]++;
    }

    // Decrease frequency using B
    for (int x : B) {
        if (freq.find(x) == freq.end() || freq[x] == 0) {
            cout << "no\n";
            return 0;  // Early exit if element not found or overused
        }
        freq[x]--;
    }

    // If all frequencies are zero → permutation
    cout << "yes\n";
    return 0;
}

