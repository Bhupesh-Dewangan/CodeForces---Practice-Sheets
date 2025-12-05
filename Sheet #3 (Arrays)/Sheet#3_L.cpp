#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T; // number of test cases
    while (T--) {
        int N;
        cin >> N; // size of array
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        
        // Generate all subarray maximums
        for (int i = 0; i < N; i++) {
            int currentMax = A[i];
            for (int j = i; j < N; j++) {
                currentMax = max(currentMax, A[j]);
                cout << currentMax << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

