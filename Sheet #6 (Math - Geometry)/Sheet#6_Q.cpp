#include <iostream>
using namespace std;

int main() {
    long long L, R, M;
    cin >> L >> R >> M;

    long long result = 1 % M; // Start with 1 mod M
    for (long long i = L; i <= R; i++) {
        result = (result * (i % M)) % M;
        if (result == 0) {
            // If at any point product becomes multiple of M, answer is 0
            break;
        }
    }
    cout << result << endl;
    return 0;
}
