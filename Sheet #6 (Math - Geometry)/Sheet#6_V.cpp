#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X1, Y1, X2, Y2;
    long long X3, Y3, X4, Y4;

    cin >> X1 >> Y1 >> X2 >> Y2;
    cin >> X3 >> Y3 >> X4 >> Y4;

    long long dx1 = X2 - X1;
    long long dy1 = Y2 - Y1;
    long long dx2 = X4 - X3;
    long long dy2 = Y4 - Y3;

    if (dx1 * dy2 == dy1 * dx2)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
