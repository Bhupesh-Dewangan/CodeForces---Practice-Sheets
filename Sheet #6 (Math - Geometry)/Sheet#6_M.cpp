#include <iostream>
#include <string>
using namespace std;

int main() {
    string N;
    long long X;
    cin >> N >> X;

    long long remainder = 0;
    for (char digit : N) {
        remainder = (remainder * 10 + (digit - '0')) % X;
    }

    if (remainder == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
