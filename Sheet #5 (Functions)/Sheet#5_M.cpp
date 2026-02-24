#include <bits/stdc++.h>
using namespace std;

int CountUnique(vector<int> arr, int n){
    unordered_map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    
    return mpp.size();
}

int main() {
    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++) 
        cin>>arr[i];
        
    int ans = CountUnique(arr, n);
    cout<<ans;
    

    return 0;
}
