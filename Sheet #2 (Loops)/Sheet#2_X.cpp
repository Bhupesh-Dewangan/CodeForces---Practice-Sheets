#include <iostream>
using namespace std;
 
int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        unsigned long long n;
        cin>>n;
    
        int count=0;
        while(n != 0){
            if(n&1) count++;
            n = n>>1;
        }
        int base = 1;
        unsigned long long ans = 0;
        while(count--){
            ans += base;
            base *= 2;
        }
    
        cout<<ans<<endl;
    }
    return 0;
}
