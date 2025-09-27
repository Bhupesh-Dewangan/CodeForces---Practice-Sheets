#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    
    int rem;
    while(n>0){
        rem = n%10;
        n /= 10;
    }
    
    if(rem%2 == 0) cout<<"EVEN";
    else cout<<"ODD";
}
