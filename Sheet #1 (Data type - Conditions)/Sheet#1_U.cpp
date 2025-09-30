 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double num;
    cin>>num;
    
    int floorVal = floor(num);
    int ceilVal = ceil(num);
    
    if(floorVal == ceilVal)
        cout<<"int "<<floorVal;
    else
        cout<<"float "<<floorVal<<" "<<(num - floorVal);
 
    return 0;
}
