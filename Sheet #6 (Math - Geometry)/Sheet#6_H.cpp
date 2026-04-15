#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y;
    cin >> x >> y;

    long long gcd = __gcd(x, y);
    long long lcm = (x / gcd) * y;

    cout << gcd << " " << lcm << endl;

    return 0;
}



