#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int N;
        cin >> N;
        
        int x1_max, y1_max, x2_min, y2_min;
        // read first rectangle
        cin >> x1_max >> y1_max >> x2_min >> y2_min;
        
        bool empty = false;
        
        for (int i = 1; i < N; i++) {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            
            if (empty) continue; // skip if already no intersection
            
            x1_max = max(x1_max, x1);
            y1_max = max(y1_max, y1);
            x2_min = min(x2_min, x2);
            y2_min = min(y2_min, y2);
            
            if (x1_max >= x2_min || y1_max >= y2_min) {
                empty = true;
            }
        }
        
        if (empty) {
            cout << "Case #" << t << ": 0\n";
        } else {
            int width = x2_min - x1_max;
            int height = y2_min - y1_max;
            if (width <= 0 || height <= 0) {
                cout << "Case #" << t << ": 0\n";
            } else {
                long long area = (long long)width * height;
                cout << "Case #" << t << ": " << area << "\n";
            }
        }
    }
    return 0;
}
