#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function to add 9999 to a big integer represented as a string
string add9999(const string& num) {
    string result = num;
    int carry = 9999;
    int len = result.length();
    
    for (int i = len - 1; i >= 0 && carry > 0; --i) {
        int digit = (result[i] - '0') + carry;
        result[i] = (digit % 10) + '0';
        carry = digit / 10;
    }
    
    // If there's still carry left, prepend it
    if (carry > 0) {
        result = to_string(carry) + result;
    }
    
    return result;
}

// Function to multiply a big integer by 9999
string multiplyBy9999(const string& num) {
    // Multiply by 9999 = multiply by (10000 - 1)
    // So: num * 9999 = num * 10000 - num
    // We can implement using big integer subtraction and shifting
    
    // Step 1: num * 10000 = num + "0000"
    string numTimes10000 = num + "0000";
    
    // Step 2: subtract num from numTimes10000
    // We'll do big integer subtraction
    string numTimes9999 = "";
    int borrow = 0;
    int len1 = numTimes10000.length();
    int len2 = num.length();
    
    // Align digits for subtraction
    string numAligned = string(len1 - len2, '0') + num;
    
    for (int i = len1 - 1; i >= 0; --i) {
        int digit1 = numTimes10000[i] - '0';
        int digit2 = numAligned[i] - '0';
        int sub = digit1 - digit2 - borrow;
        if (sub < 0) {
            sub += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        numTimes9999.push_back(sub + '0');
    }
    
    // Remove leading zeros
    while (numTimes9999.length() > 1 && numTimes9999.back() == '0') {
        numTimes9999.pop_back();
    }
    
    reverse(numTimes9999.begin(), numTimes9999.end());
    return numTimes9999;
}

int main() {
    string N;
    cin >> N;
    
    cout << add9999(N) << endl;
    cout << multiplyBy9999(N) << endl;
    
    return 0;
}
