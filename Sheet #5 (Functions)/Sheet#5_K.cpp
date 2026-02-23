#include <bits/stdc++.h>
using namespace std;

void shiftRight(vector<int> &arr, int n, int x){
    reverse(arr.begin(), arr.end()-x);
    reverse(arr.end()-x, arr.end());
    reverse(arr.begin(), arr.end());
}

int main() {
    int n, x;
    cin>>n>>x;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++) cin>>arr[i];
    
    x = x%n;
    
    shiftRight(arr,n,x);
    
    for(int i=0; i<n; i++) cout<<arr[i]<<" ";
    

    return 0;
}
