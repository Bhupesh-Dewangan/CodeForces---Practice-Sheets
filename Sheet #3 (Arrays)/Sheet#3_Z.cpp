#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    
    int key;
    for(int i=0; i<q; i++){
        cin>>key;

    if (binary_search(arr, arr+n, key))
        cout <<"found\n";
    else
        cout <<"not found\n";

    }
    return 0;
}
