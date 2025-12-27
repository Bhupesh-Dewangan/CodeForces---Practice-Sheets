#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);

    int count = 0;
    bool inWord = false;

    for (char c : S) {
        if (isalpha(c)) {   // check if letter
            if (!inWord) {
                count++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << count << endl;
    return 0;
}

