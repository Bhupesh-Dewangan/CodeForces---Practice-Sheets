#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int i=0, j=n-1;
    while(i <= j){
        if(i!=j){
            cout<<arr[i++]<<" "<<arr[j--]<<" ";
        }
        else{
            cout<<arr[i++];
        }
    }

    return 0;
}
