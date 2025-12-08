#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        int left=0, right=m-1;
        while(left < right){
            swap( arr[i][left], arr[i][right]);
            left++;
            right--;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

    return 0;
}
