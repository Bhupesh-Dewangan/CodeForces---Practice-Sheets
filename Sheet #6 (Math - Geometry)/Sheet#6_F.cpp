#include <iostream>
#include <vector>
using namespace std;

int main() {
    int RA, CA;
    cin >> RA >> CA;
    
    vector<vector<int>> A(RA, vector<int>(CA));
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CA; j++) {
            cin >> A[i][j];
        }
    }
    
    int RB, CB;
    cin >> RB >> CB;
    
    vector<vector<int>> B(RB, vector<int>(CB));
    for (int i = 0; i < RB; i++) {
        for (int j = 0; j < CB; j++) {
            cin >> B[i][j];
        }
    }
    
    // Result matrix: RA x CB
    vector<vector<int>> C(RA, vector<int>(CB, 0));
    
    // Matrix multiplication
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            for (int k = 0; k < CA; k++) {  // CA == RB
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    // Output
    for (int i = 0; i < RA; i++) {
        for (int j = 0; j < CB; j++) {
            cout << C[i][j];
            if (j < CB - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
