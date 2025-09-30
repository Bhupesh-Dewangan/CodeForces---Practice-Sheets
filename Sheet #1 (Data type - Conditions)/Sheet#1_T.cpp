#include <algorithm>
using namespace std;
 
int main() {
    int A, B, C;
    cin >> A >> B >> C;
 
    // Store original values
    int original[3] = {A, B, C};
 
    // Sort a copy of the array
    int sorted[3] = {A, B, C};
    sort(sorted, sorted + 3);
 
    // Print sorted values
    for (int i = 0; i < 3; i++) {
        cout << sorted[i] << endl;
    }
 
    cout << endl;
 
    // Print original values
    for (int i = 0; i < 3; i++) {
        cout << original[i] << endl;
    }
 
    return 0;
}
