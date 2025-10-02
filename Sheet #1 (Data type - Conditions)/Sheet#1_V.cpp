#include <iostream>
using namespace std;
 
int main() {
    int A, B;
    char S;
 
    // Read input: A, S, B
    cin >> A >> S >> B;
 
    // Check the comparison and print result
    if (S == '<' && A < B)
        cout << "Right" << endl;
    else if (S == '>' && A > B)
        cout << "Right" << endl;
    else if (S == '=' && A == B)
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;
 
    return 0;
}
