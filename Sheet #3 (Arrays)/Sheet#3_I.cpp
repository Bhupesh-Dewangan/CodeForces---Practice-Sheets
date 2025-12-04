#include <bits/stdc++.h>
using namespace std;

int main() {
    short int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sum =0, minSum = INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                sum = arr[i] + arr[j] + j - i;
                minSum = min(minSum, sum);
            }
        }
        
        cout<<minSum<<endl;
        
        
        
    }

    return 0;
}
