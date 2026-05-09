#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    double logSum = 0.0;
    for (int i = 1; i <= N; i++) {
        logSum += log10(i);
    }
    
    int digits = floor(logSum) + 1;
    
    cout << "Number of digits of " << N << "! is " << digits << endl;
    
    return 0;
}
