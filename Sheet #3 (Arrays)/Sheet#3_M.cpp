// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    int maxIndex = -1, minIndex=-1, maxi=INT_MIN, mini=INT_MAX;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        
        if(arr[i] > maxi){
            maxIndex = i; 
            maxi = arr[i];
        }
        
        if(arr[i] < mini){
            minIndex = i; 
            mini = arr[i];
        }
        
    }
    swap(arr[minIndex], arr[maxIndex]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
