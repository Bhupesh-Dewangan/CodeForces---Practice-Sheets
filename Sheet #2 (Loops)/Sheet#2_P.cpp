#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    for (int i = N; i >= 1; i--) {       // Start from N down to 1
        for (int j = 1; j <= i; j++) {   // Print i stars in each row
            cout << '*';
        }
        cout << '\n';
    }
 
    return 0;
}
