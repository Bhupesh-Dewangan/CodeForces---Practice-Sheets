#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    vector<long long> A(N);   // Since Ai ≤ 1e9, use long long
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    long long X;
    cin >> X;
 
    int position = -1;
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            position = i;
            break;  // stop at first occurrence
        }
    }
 
    cout << position << endl;
    return 0;
}
