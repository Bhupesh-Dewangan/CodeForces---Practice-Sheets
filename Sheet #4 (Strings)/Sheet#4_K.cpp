#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        
        int i=0;
        while( i < s1.length() && i < s2.length()){
            cout<<s1[i]<<s2[i];
            i++;
        }
        
        while( i < s1.length() ){
            cout<<s1[i];
            i++;
        }
        
        while(i < s2.length()){
            cout<<s2[i];
            i++;
        }
        
        cout<<endl;
    }

    return 0;
}
