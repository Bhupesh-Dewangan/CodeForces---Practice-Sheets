#include <iostream>
using namespace std;
 
int main() {
    long long num;
    cin >> num;
    
    long long original = num;
    long long reversed = 0;
    
    while (num > 0) {
        int digit = num % 10;           
        reversed = reversed * 10 + digit; 
        num /= 10;                      
    }
    
    cout<<reversed<<endl;
    if(reversed == original) cout<<"YES";
    else cout<<"NO";
}
