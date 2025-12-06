
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int mat[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }
    
    int major=0, minor=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // cout<<mat[i][j]<<" ";
            if(i==j) major += mat[i][j];
            if(j == n-i-1) minor += mat[i][j];
            // if(i==j) cout<<mat[i][j]<<" ";
            // if(j == n-i-1) cout<<mat[i][j]<<" ";
            
        }
    }
    cout<<abs(major-minor);
    
    return 0;
}
