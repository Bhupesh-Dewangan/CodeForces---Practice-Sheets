#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp == 0) cout<<"0 ";
        else if(temp > 0) cout<<"1 ";
        else cout<<"2 ";
    }
 
    return 0;
}
