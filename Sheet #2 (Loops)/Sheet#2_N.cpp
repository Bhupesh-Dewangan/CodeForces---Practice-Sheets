#include<iostream>
using namespace std;
 
int main(){
    char s;
    cin>>s;
    int n;
    cin>>n;
    
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        
        for(int i=0; i<temp; i++)
            cout<<s;
            
        cout<<endl;
    }
    
    
}
