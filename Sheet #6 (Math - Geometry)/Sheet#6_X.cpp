#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    
    // Find rectangle bounds
    int xmin = min({x1, x2, x3, x4});
    int xmax = max({x1, x2, x3, x4});
    int ymin = min({y1, y2, y3, y4});
    int ymax = max({y1, y2, y3, y4});
    
    int N;
    cin >> N;
    
    while (N--) {
        int x, y;
        cin >> x >> y;
        
        if (x >= xmin && x <= xmax && y >= ymin && y <= ymax) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
