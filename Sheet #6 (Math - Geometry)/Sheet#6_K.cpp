#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int A, B;
    cin >> A >> B;

    long long nCr = factorial(A) / (factorial(B) * factorial(A - B));
    long long nPr = factorial(A) / factorial(A - B);

    cout << nCr << " " << nPr << endl;

    return 0;
}
