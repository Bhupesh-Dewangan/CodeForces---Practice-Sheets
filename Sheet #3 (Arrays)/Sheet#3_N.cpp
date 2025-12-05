#include <iostream>
using namespace std;
 
int main() {
    int a,b;
    cin>>a>>b;
    
    string s;
    cin>>s;
    
    if(s[a] != '-'){
        cout<<"No";
        return 0;
    }
    
    if(s.length() != a+b+1){
        cout<<"No";
        return 0;
    }
    
    for(int i=0; i<s.length(); i++){
        if( !isdigit(s[i]) && i != a ){
            cout<<"No";
            return 0;
        }
    }
    
    cout<<"Yes";
 
    return 0;
}
