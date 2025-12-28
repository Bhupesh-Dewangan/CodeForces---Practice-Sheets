#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<string> result;
    int balance = 0;
    string current = "";
    
    for (char ch : s) {
        current += ch;
        if (ch == 'L') {
            balance++;
        } else { // 'R'
            balance--;
        }
        
        if (balance == 0) {
            result.push_back(current);
            current = "";
        }
    }
    
    cout << result.size() << endl;
    for (const string& sub : result) {
        cout << sub << endl;
    }
    
    return 0;
}
