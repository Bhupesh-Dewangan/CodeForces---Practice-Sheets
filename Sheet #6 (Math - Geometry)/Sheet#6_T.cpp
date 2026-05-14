#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long X, Y, R, N;
    cin >> X >> Y >> R >> N;

    // Precompute R^2 to avoid precision issues
    long long R2 = R * R;

    for (int i = 0; i < N; i++) {
        long long xi, yi;
        cin >> xi >> yi;

        // Calculate squared distance from center to point
        long long dx = xi - X;
        long long dy = yi - Y;
        long long dist2 = dx * dx + dy * dy;

        if (dist2 <= R2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
