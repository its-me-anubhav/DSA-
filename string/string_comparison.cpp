#include <bits/stdc++.h>
using namespace std;

// Class containing the compareStrings function
class Solution {
public:
    // Function to compare two strings
    bool compareStrings(string str1, string str2) {
        // Return true if strings are equal
        return str1 == str2;
    }
};

// Main function
int main() {
    // Create object of Solution class
    Solution obj;

    // Input first string
    string str1;
    cin >> str1;

    // Input second string
    string str2;
    cin >> str2;

    // Compare strings and print result
    if (obj.compareStrings(str1, str2))
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}
