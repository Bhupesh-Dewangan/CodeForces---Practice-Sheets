
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<long long> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int j = 0; j < M; j++) cin >> B[j];

    int i = 0, j = 0;
    while (i < N && j < M) {
        if (A[i] == B[j]) {
            j++; // move in B if we find a match
        }
        i++; // always move in A
    }

    if (j == M) cout << "YES\n"; 
    else cout << "NO\n";

    return 0;
}
