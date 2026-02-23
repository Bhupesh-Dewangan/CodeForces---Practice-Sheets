#include <bits/stdc++.h>
using namespace std;

double findAvg(double arr[], int n){
    double sum = 0;
    for(int i=0; i<n; i++) sum += arr[i];
    
    return sum/n;
}

int main() {
    int n;
    cin>>n;
    
    double arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    double ans = findAvg(arr, n);
    cout<<fixed<<setprecision(6)<<ans;

    return 0;
}
