#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,m;
    while(cin>>n>>m){
        if(n <= 0 || m <= 0) return 0;
        
        int mi = min(n,m);
        int ma = max(n,m);
        int sum = 0;
        for(int i=mi; i<=ma; i++){
            cout<< i << " ";
            sum += i;
        }
        
        cout<<"sum ="<<sum<<endl;
    }
}
