#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    
    int temp;
    int arr[m]={0};
    for(int i=0; i<n; i++){
        cin>>temp;
        arr[temp-1]++;
    }
    
    for(int i=0; i<m; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
