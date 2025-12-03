#include <iostream>
using namespace std;
 
int main() {
   int n;
   cin>>n;
   
   int temp;
   for(int i=0; i<n; i++){
       cin>>temp;
       if(temp <= 10) cout<<"A["<<i<<"]"<<" = "<<temp<<endl;
   }
 
    return 0;
}
