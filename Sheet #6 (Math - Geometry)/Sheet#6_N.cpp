#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to convert a character to its numeric value
int charToValue(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else
        return c - 'A' + 10;
}

// Function to convert a numeric value to its character representation
char valueToChar(int num) {
    if (num >= 0 && num <= 9)
        return '0' + num;
    else
        return 'A' + (num - 10);
}

int main() {
    int T;
    cin >> T;
    
    if (T == 1) {
        // Convert from base X to decimal
        string N;
        int X;
        cin >> N >> X;
        
        long long result = 0;
        long long power = 1;
        
        // Process from rightmost digit to leftmost
        for (int i = N.length() - 1; i >= 0; i--) {
            result += charToValue(N[i]) * power;
            power *= X;
        }
        
        cout << result << endl;
    }
    else if (T == 2) {
        // Convert from decimal to base X
        long long N;
        int X;
        cin >> N >> X;
        
        string result = "";
        
        // Special case for 0
        if (N == 0) {
            result = "0";
        }
        else {
            while (N > 0) {
                int remainder = N % X;
                result += valueToChar(remainder);
                N /= X;
            }
            reverse(result.begin(), result.end());
        }
        
        cout << result << endl;
    }
    
    return 0;
}
