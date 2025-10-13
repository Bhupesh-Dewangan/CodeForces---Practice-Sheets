#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int unit = (n%10);
    n = n/10;
    int tenth = (n%10);
    if( unit%tenth == 0 || tenth%unit == 0 )
        cout<<"YES";
    else cout<<"NO";
}

