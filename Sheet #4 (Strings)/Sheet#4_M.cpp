#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    string target = "hello";
    int j = 0;

    for(int i = 0; i < S.size() && j < target.size(); i++) {
        if(S[i] == target[j]) {
            j++;
        }
    }

    if(j == target.size()) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
