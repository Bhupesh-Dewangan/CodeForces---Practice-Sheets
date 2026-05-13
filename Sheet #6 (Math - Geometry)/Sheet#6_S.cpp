#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Check triangle validity using triangle inequality theorem
    if (A + B > C && A + C > B && B + C > A) {
        // Valid triangle
        double s = (A + B + C) / 2.0; // semi-perimeter
        double area = sqrt(s * (s - A) * (s - B) * (s - C)); // Heron's formula
        cout << "Valid\n";
        cout << fixed << setprecision(6) << area << endl;
    } else {
        cout << "Invalid\n";
    }

    return 0;
}
