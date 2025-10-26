#include <iostream>
using namespace std;
 
int main() {
    int N;
    cin >> N;
 
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int space = 1; space <= N - i; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 1; star <= (2 * i - 1); star++) {
            cout << "*";
        }
        cout << "\n"; // Move to the next row
    }
 
    return 0;
}
