#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenateArrays(vector<int>& A, vector<int>& B, int N) {
    vector<int> C;
    C.reserve(2 * N);  // Reserve memory for efficiency

    // First push elements of B
    for (int i = 0; i < N; i++) {
        C.push_back(B[i]);
    }
    // Then push elements of A
    for (int i = 0; i < N; i++) {
        C.push_back(A[i]);
    }
    return C;
}

int main() {
    int N;
    cin >> N;

    vector<int> A(N), B(N);

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    vector<int> C = concatenateArrays(A, B, N);

    for (int i = 0; i < 2 * N; i++) {
        cout << C[i] << " ";
    }

    return 0;
}

