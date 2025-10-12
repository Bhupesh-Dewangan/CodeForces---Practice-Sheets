#include<iostream>
using namespace std;
 
int main(){
    long long d;
    long long a,b,c;
    cin>>a>>b>>c>>d;
 
    if(a+b-c == d) cout<<"YES";
    else if(a+b*c == d) cout<<"YES";
    else if(a-b+c == d) cout<<"YES";
    else if(a-b*c == d) cout<<"YES";
    else if(a*b+c == d) cout<<"YES";
    else if(a*b-c == d) cout<<"YES";
    else cout<<"NO";
    
}
