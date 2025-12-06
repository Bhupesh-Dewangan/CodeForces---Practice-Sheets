#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    
    int mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            cin>>mat[i][j];
    }
    
    int key;
    cin>>key;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++)
            if(mat[i][j] == key){
                cout<<"will not take number"<<endl;
                return 0;
            }
    }
    
    cout<<"will take number"<<endl;

    return 0;
}
