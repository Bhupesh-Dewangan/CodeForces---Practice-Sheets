#include<iostream>
using namespace std;
 
int main(){
    unsigned long long n;
    cin>>n;
    unsigned long long row = n/4;
    cout<<n/4<<" ";
    if(row%2 == 0){
        cout<<n%4;
    }
    else{
        cout<<(3 - n%4);
    }
    
}
