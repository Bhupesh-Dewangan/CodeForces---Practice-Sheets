#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    string S;
    
    cin >> N >> S;
    
    // Frequency array for 'a' to 'z'
    int freq[26] = {0};
    
    // Count each character
    for (char c : S) {
        freq[c - 'a']++;
    }
    
    // Output directly without storing sorted string
    for (int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        for (int j = 0; j < freq[i]; j++) {
            cout << ch;
        }
    }
    
    cout << "\n";
    
    return 0;
}
