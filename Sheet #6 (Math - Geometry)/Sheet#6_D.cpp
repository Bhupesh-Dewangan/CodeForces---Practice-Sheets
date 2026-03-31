#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long A, B, Q;
    cin >> A >> B >> Q;
    
    long long remainder = Q % 3;
    
    if (remainder == 1) {
        cout << A;
    } else if (remainder == 2) {
        cout << B;
    } else { // remainder == 0
        cout << (A ^ B);
    }
    
    return 0;
}
