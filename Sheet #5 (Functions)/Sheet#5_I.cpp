#include <bits/stdc++.h>
using namespace std;

// Function to swap two rows
void swapRows(vector<vector<int>>& A, int X, int Y) {
    swap(A[X], A[Y]);
}

// Function to swap two columns
void swapCols(vector<vector<int>>& A, int X, int Y) {
    int N = A.size();
    for(int i = 0; i < N; i++) {
        swap(A[i][X], A[i][Y]);
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    // Convert to 0-based indexing
    X--; 
    Y--;

    vector<vector<int>> A(N, vector<int>(N));

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    // Perform operations
    swapRows(A, X, Y);
    swapCols(A, X, Y);

    // Print result
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

