#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    unordered_set<int> s(a.begin(), a.end()); // store all elements for quick lookup
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s.count(a[i] + 1)) // check if ai+1 exists
            count++;
    }
    
    cout << count;
    return 0;
}

