#include<bits/stdc++.h>
using namespace std;
 
int main(){
    double d, dp;
    cin>>d>>dp;
    
    double og = dp / (1 - (d/100));
    cout<<fixed<<setprecision(2)<<og;
}
