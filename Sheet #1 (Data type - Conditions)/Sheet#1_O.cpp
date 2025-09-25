#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    string s;
    cin>>s;
    int i=0;
    long long a = 0,b = 0;
    while( s[i] != '\0'){
        if(s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
            break;
        else
            a  = a*10 + (s[i]-'0');
            
        i++;
    }
    
    int op = i;
    i++;
    
    while( s[i] != '\0'){
        b  = b*10 + (s[i]-'0');
        i++;
    }
    
    switch(s[op]){
        case '+' : cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*' : cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
    }
    
    
}
