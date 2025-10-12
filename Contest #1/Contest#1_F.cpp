#include<iostream> 
using namespace std;
 
int main(){
    long long a,b;
    cin>>a>>b;
    long long ans=0;
    int base = 1;
    while( a != 0 || b != 0){
        int sum = (a&1) + (b&1);
        if( sum < 2 ) 
            ans += sum*base;
        
        base = base*2;
        a = a>>1;
        b = b>>1;
    }
    
    cout<<ans;
}
