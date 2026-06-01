#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x1, y1, x2, y2;
    double x3, y3, x4, y4;
    
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    
    // Center of circle A
    double cxA = (x1 + x2) / 2.0;
    double cyA = (y1 + y2) / 2.0;
    
    // Center of circle B
    double cxB = (x3 + x4) / 2.0;
    double cyB = (y3 + y4) / 2.0;
    
    // Radii
    double rA = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) / 2.0;
    double rB = sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3)) / 2.0;
    
    // Distance between centers
    double d = sqrt((cxA - cxB) * (cxA - cxB) + (cyA - cyB) * (cyA - cyB));
    
    // Intersection condition
    if (abs(rA - rB) <= d && d <= rA + rB) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
