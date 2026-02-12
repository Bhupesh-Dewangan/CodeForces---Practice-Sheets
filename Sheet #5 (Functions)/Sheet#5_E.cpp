#include <iostream>
using namespace std;

void exchange(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main() {
    int x,y;
    cin>>x>>y;
    exchange(x,y);
    cout<<x<<" "<<y;

    return 0;
}
