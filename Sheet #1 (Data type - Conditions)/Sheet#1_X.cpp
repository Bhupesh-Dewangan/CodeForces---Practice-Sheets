#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long l1,l2,l3,l4;
    cin>>l1>>l2>>l3>>l4;
    
    if(l1 <= l3){
        if( l3 <= l2)
            cout<<l3<<" "<<min(l2,l4);
        else
            cout<<-1;
    }
    else{
        if( l1 <= l4)
            cout<<l1<<" "<<min(l2,l4);
        else
            cout<<-1;
    }
}
