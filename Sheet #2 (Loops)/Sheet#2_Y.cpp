#include <iostream>
using namespace std;
 
int main() {
    short int n;
    cin>>n;
    
    int a=0, b=1, c=0;
    for(int i=0; i<n; i++){
        cout<<a<<" ";
        c = a+b;
        a= b;
        b = c;
    }
 
    return 0;
}

