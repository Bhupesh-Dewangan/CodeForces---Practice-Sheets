#include<iostream>
using namespace std;
 
int main(){
    short int n;
    cin>>n;
    int j=1;
    for(int i=1; i<=n; i++){
        cout<<j++<<" "<<j++<<" "<<j++<<" "<<"PUM"<<endl;
        j++;
    }
}
