#include <iostream>
#include <cmath>  // For log
using namespace std;
 
int main() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;
 
    // Use logarithm to compare powers
    double left = B * log(A);
    double right = D * log(C);
 
    if (left > right)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}
