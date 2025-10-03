#include<iostream>
using namespace std;
 
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    
    a = a % 100;
    b = b % 100;
    c = c % 100;
    d = d % 100;
    
    int ans = (a*b*c*d)%100;
    if( ans >= 0 && ans <= 9) cout<<"0";
    cout<<ans;
}
