#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string S;
    cin >> S;

    list<char> lst(S.begin(), S.end());
    long long score = 0;
    
    for (auto it = lst.begin(); it != lst.end(); ) {
        char ch = *it;
        
        if (ch == 'V') {
            score += 5;
            ++it;
        } 
        else if (ch == 'W') {
            score += 2;
            ++it;
        } 
        else if (ch == 'X') {
            auto next = it;
            ++next;
            if (next != lst.end()) {
                lst.erase(next);
            }
            ++it;
        } 
        else if (ch == 'Y') {
            auto next = it;
            ++next;
            if (next != lst.end()) {
                char val = *next;
                lst.erase(next);
                lst.push_back(val);
            }
            ++it;
        } 
        else if (ch == 'Z') {
            auto next = it;
            ++next;
            if (next != lst.end()) {
                if (*next == 'V') {
                    score /= 5;
                    lst.erase(next);
                } 
                else if (*next == 'W') {
                    score /= 2;
                    lst.erase(next);
                }
            }
            ++it;
        }
    }

    cout << score << "\n";
    return 0;
}
