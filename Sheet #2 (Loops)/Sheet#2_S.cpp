#include<bits/stdc++.h>
using namespace std;
 
int main(){
    short int t;
    cin>>t;
    
    while(t--){
        int x,y,a,b;
        cin>>a>>b;
        
        x = min(a,b);
        y = max(a,b);
        long long sum=0;
        int start;
        if(x%2==0) start = x+1;
        else start = x+2;
        
        for(int i= start; i<y; i++){
            sum += i;
            i++;
        }
        
        cout<<sum<<endl;
        
        
    }
}
