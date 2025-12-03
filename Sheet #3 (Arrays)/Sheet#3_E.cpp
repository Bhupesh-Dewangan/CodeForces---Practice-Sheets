#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int temp, low=INT_MAX, index = -1;
    for(int i=1; i<=n; i++){
        cin>>temp;
        if(temp < low){
            low = temp;
            index = i;
        }
    }
    
    cout<<low<<" "<<index;
 
    return 0;
}
