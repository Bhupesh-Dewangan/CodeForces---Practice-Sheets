#include <iostream>
using namespace std;

void printNChar(int n, char c){
    
    for(int i=0; i<n; i++) cout<<c<<" ";
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        
        printNChar(n,c);
        cout<<endl;
    }

    return 0;
}
