#include<iostream>
using namespace std;
 
int main(){
    long long x;
    cin>>x;
    
    int year = x/365;
    x %= 365;
    int month = x/30;
    x %= 30;
    int day = x;
    
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<day<<" days";
    
}
