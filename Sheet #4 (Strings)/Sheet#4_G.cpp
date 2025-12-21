#include <iostream>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    
    for(int i=0; i<s.length(); i++){
        if(s[i]==',') cout<<" ";
        else if( s[i] >= 'a' && s[i] <= 'z') cout<<char('A' + (s[i] - 'a'));
        else cout<<char('a' + (s[i] - 'A'));
    }
 
    return 0;
}
