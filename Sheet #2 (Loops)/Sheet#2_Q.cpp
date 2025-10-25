#include <iostream>
using namespace std;
 
int main() {
    long long t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (n == 0) {
            cout << 0;
        } else {
            bool first = true;
            while (n != 0) {
                if (!first) cout << " ";
                cout << n % 10;
                n /= 10;
                first = false;
            }
        }
        cout << endl;
    }
}

