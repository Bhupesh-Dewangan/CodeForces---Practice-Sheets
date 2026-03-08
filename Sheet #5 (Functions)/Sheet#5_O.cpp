#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find maximum
int findMax(vector<int> &arr, int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) mx = arr[i];
    }
    return mx;
}

// Function to find minimum
int findMin(vector<int> &arr, int n) {
    int mn = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < mn) mn = arr[i];
    }
    return mn;
}

// Check if a number is prime
bool isPrime(int x) {
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i += 2) {
        if (x % i == 0) return false;
    }
    return true;
}

// Count prime numbers
int CountPrime(vector<int> &arr, int n) {
    int count = 0;
    for (int x : arr) {
        if (isPrime(x)) count++;
    }
    return count;
}

// Check palindrome
bool isPalindrome(int x) {
    int original = x, rev = 0;
    while (x > 0) {
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev == original;
}

// Count palindrome numbers
int CountPalindrome(vector<int> &arr, int n) {
    int count = 0;
    for (int x : arr) {
        if (isPalindrome(x)) count++;
    }
    return count;
}

// Count divisors of a number
int divisorCount(int x) {
    int count = 0;
    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            count++;
            if (i != x / i) count++; // pair divisor
        }
    }
    return count;
}

// Find number with maximum divisors
int maxDivisors(vector<int> &arr, int n) {
    int bestNumber = arr[0];
    int bestCount = divisorCount(arr[0]);
    
    for (int i = 1; i < n; i++) {
        int d = divisorCount(arr[i]);
        if (d > bestCount) {
            bestCount = d;
            bestNumber = arr[i];
        } else if (d == bestCount) {
            // If equal number of divisors, take the larger number
            if (arr[i] > bestNumber) {
                bestNumber = arr[i];
            }
        }
    }
    return bestNumber;
}

// Main function
int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "The maximum number : " << findMax(arr, n) << endl;
    cout << "The minimum number : " << findMin(arr, n) << endl;
    cout << "The number of prime numbers : " << CountPrime(arr, n) << endl;
    cout << "The number of palindrome numbers : " << CountPalindrome(arr, n) << endl;
    cout << "The number that has the maximum number of divisors : " 
         << maxDivisors(arr, n) << endl;
    
    return 0;
}
