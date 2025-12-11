#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if(x == y) cout<<"Square\n";
        else cout<<"Rectangle\n";
    }

    return 0;
}
