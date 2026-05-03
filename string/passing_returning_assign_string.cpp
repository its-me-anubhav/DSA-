#include <bits/stdc++.h>
using namespace std;

// Solution class containing modifyString function
class Solution {
public:
    // Function to modify the string
    string modifyString(string str) {
        // Assign str to a new variable
        string newStr = str;

        // Modify the new string
        newStr[0] = 'H';

        // Return the modified string
        return newStr;
    }
};

int main() {
    // Original string
    string original = "hello";

    // Create object of Solution class
    Solution sol;

    // Call modifyString and store the result
    string modified = sol.modifyString(original);

    // Print both strings
    cout << "Original String: " << original << endl;
    cout << "Modified String: " << modified << endl;

    return 0;
}
