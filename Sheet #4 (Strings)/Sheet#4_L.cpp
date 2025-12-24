#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    while (Q--) {
        string query;
        cin >> query;

        if (query == "pop_back") {
            S.pop_back();
        }
        else if (query == "front") {
            cout << S.front() << endl;
        }
        else if (query == "back") {
            cout << S.back() << endl;
        }
        else if (query == "sort") {
            int l, r;
            cin >> l >> r;
            l--; r--;
            if (l > r) swap(l, r); // Handle if l > r
            sort(S.begin() + l, S.begin() + r + 1);
        }
        else if (query == "reverse") {
            int l, r;
            cin >> l >> r;
            l--; r--;
            if (l > r) swap(l, r); // Handle if l > r
            reverse(S.begin() + l, S.begin() + r + 1);
        }
        else if (query == "print") {
            int pos;
            cin >> pos;
            pos--;
            cout << S[pos] << endl;
        }
        else if (query == "substr") {
            int l, r;
            cin >> l >> r;
            l--; r--;
            if (l > r) swap(l, r); // Handle if l > r
            cout << S.substr(l, r - l + 1) << endl;
        }
        else if (query == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

    return 0;
}
