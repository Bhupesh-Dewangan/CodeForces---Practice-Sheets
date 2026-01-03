#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    string S;
    cin >> Q >> S;

    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    unordered_map<char, char> encryptMap, decryptMap;

    // Build encryption and decryption mappings
    for (int i = 0; i < (int)original.size(); i++) {
        encryptMap[original[i]] = key[i];
        decryptMap[key[i]] = original[i];
    }

    string result = "";
    if (Q == 1) {
        // Encryption
        for (char c : S) {
            result += encryptMap[c];
        }
    } else {
        // Decryption
        for (char c : S) {
            result += decryptMap[c];
        }
    }

    cout << result;
    return 0;
}

