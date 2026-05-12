#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    long long dx = x2 - x1;
    long long dy = y2 - y1;
    
    double distance = sqrt(dx * dx + dy * dy);
    
    cout << fixed << setprecision(9) << distance << endl;
    
    return 0;
}
