#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    size_t pos = 0;
    while ((pos = s.find("EGYPT", pos)) != string::npos) {
        s.replace(pos, 5, " ");
        pos += 1; // Move forward to avoid infinite loop on overlapping matches
    }

    cout << s << endl;

    return 0;
}
