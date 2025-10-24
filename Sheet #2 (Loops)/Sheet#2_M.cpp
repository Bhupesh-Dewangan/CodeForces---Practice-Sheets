#include <bits/stdc++.h>
using namespace std;
 
bool isLucky(int num) {
    string s = to_string(num);
    for (char c : s) {
        if (c != '4' && c != '7')
            return false;
    }
    return true;
}
 
int main() {
    int A, B;
    cin >> A >> B;
    vector<int> luckyNumbers;
 
    for (int i = A; i <= B; i++) {
        if (isLucky(i)) {
            luckyNumbers.push_back(i);
        }
    }
 
    if (luckyNumbers.empty()) {
        cout << -1;
    } else {
        for (int num : luckyNumbers) {
            cout << num << " ";
        }
    }
    return 0;
}
