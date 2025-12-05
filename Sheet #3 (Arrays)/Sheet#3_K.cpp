#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // number of digits
    
    string digits;
    cin >> digits; // digits as a string
    
    int sum = 0;
    for (char c : digits) {
        sum += (c - '0'); // convert char to int
    }
    
    cout << sum << endl;
    return 0;
}

