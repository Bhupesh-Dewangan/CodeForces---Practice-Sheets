
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    
    // Extract values using string operations
    string username = S.substr(S.find("username=") + 9);
    username = username.substr(0, username.find('&'));
    
    string pwd = S.substr(S.find("pwd=") + 4);
    pwd = pwd.substr(0, pwd.find('&'));
    
    string profile = S.substr(S.find("profile=") + 8);
    profile = profile.substr(0, profile.find('&'));
    
    string role = S.substr(S.find("role=") + 5);
    role = role.substr(0, role.find('&'));
    
    string key = S.substr(S.find("key=") + 4);
    
    // Print results
    cout << "username: " << username << endl;
    cout << "pwd: " << pwd << endl;
    cout << "profile: " << profile << endl;
    cout << "role: " << role << endl;
    cout << "key: " << key << endl;
    
    return 0;
}
