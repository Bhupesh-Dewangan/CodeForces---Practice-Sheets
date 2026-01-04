#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    // If we cannot split, just print the original string
    if (n <= 1) {
        cout << s;
        return 0;
    }

    string smallest = s; // store the smallest result

    // Try every possible split point
    for (int i = 1; i < n; i++) {
        string x = s.substr(0, i);
        string y = s.substr(i);

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        string combined = x + y;

        // Keep the lexicographically smallest string
        if (combined < smallest)
            smallest = combined;
    }

    cout << smallest;
    return 0;
}


