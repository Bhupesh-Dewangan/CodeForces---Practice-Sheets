#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    int changeA = 0; // start with positive
    int changeB = 0; // start with negative
 
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // even index
            if (a[i] < 0) changeA++; // should be positive
            if (a[i] > 0) changeB++; // should be negative
        } else { // odd index
            if (a[i] > 0) changeA++; // should be negative
            if (a[i] < 0) changeB++; // should be positive
        }
    }
 
    cout << min(changeA, changeB);
    return 0;
}
