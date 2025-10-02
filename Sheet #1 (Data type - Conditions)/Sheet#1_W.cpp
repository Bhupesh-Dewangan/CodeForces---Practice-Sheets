#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int A, B, C;
    char op, eq;
 
    // Read input in the format: A op B = C
    cin >> A >> op >> B >> eq >> C;
 
    int result;
 
    // Perform the operation based on op
    if (op == '+') {
        result = A + B;
    } else if (op == '-') {
        result = A - B;
    } else if (op == '*') {
        result = A * B;
    }
 
    // Output result
    if (result == C) {
        cout << "Yes" << endl;
    } else {
        cout << result << endl;
    }
 
    return 0;
}

