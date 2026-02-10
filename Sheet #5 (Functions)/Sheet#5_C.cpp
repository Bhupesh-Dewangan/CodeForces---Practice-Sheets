#include <iostream>
using namespace std;

bool checkOdd(int n){
    return n%2!=0;
}

bool checkBinary(int n){
    int temp = n;
    string bin = "";
    while(temp != 0){
        if(temp & 1) bin += "1";
        else bin += "0";
        
        temp = temp>>1;
    }
    
    int i=0, j=bin.length()-1;
    while(i < j){
        if(bin[i++] != bin[j--]) return false;
    }
    
    return true;
}

int main() {
    int n;
    cin>>n;
    
    if(checkOdd(n) && checkBinary(n))
        cout<<"YES";
    else cout<<"NO";

    return 0;
}
