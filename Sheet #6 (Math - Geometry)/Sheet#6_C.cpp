#include <iostream>
using namespace std;

long long sumAll(long long n){
    return n*(n+1)/2;
}

long long sumEven(long long n){
    return 2 * sumAll(n/2);
}

long long sumOdd(long long n){
    return sumAll(n) - sumEven(n);
}

int main() {
    long long l, r;
    cin >> l >> r;
    
    if(r < l) swap(l, r);
    
    cout << sumAll(r) - sumAll(l-1) << endl;
    cout << sumEven(r) - sumEven(l-1) << endl;
    cout << sumOdd(r) - sumOdd(l-1) << endl;

    return 0;
}
