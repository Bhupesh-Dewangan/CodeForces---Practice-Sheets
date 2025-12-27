#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    
    stack<char> st;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            while(!st.empty()){
                cout<<st.top();
                st.pop();
                
            }
            cout<<" ";
        }
        else
        st.push(s[i]);
    }
    
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}
