#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int even=0, odd=0, positive=0, negative=0;
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        
        if(temp%2==0) even++;
        else odd++;
        
        if(temp < 0) negative++;
        else if (temp > 0) positive++;
    }
    
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;
 
}
