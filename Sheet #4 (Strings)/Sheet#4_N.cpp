#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    char last_char = '\0';
    int length = 0;

    for (char c : S) {
        if (c != last_char) {
            length++;
            last_char = c;
        }
    }

    cout << length << endl;
    return 0;
}

