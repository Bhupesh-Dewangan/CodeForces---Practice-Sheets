#include<iostream>
using namespace std;
 
int main(){
    short int a,b;
    cin>>a>>b;
    
    if( abs(a-b) == 1 || ((a == b) && a != 0)) cout<<"YES";
    else cout<<"NO";
}
