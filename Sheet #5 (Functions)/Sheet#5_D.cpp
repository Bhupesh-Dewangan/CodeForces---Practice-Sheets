#include <iostream>
using namespace std;

bool checkPrime(int n){
    if(n == 1) return false;
    
    for(int i=2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    
    return true;
}

int main() {
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        if(checkPrime(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
