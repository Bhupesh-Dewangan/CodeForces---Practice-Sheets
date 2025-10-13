#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    
    // Step 1: Make as many Type C (1 eye + 1 mouth + 1 body)
    long long typeC = min({n, m, k});
    n -= typeC;
    m -= typeC;
    k -= typeC;
    
    // Step 2: Make as many Type A (2 eyes + 1 body)
    long long typeA = min(n / 2, k);
    
    // Total dolls
    cout << typeC + typeA << endl;
    return 0;
}
