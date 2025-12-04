#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Find minimum element
    int minElement = *min_element(A.begin(), A.end());

    // Count its frequency
    int freq = count(A.begin(), A.end(), minElement);

    // Check odd/even
    if (freq % 2 == 1)
        cout << "Lucky" << endl;
    else
        cout << "Unlucky" << endl;

    return 0;
}

