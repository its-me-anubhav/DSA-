#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// Function to calculate Hamming Distance between original and rearranged string
int calculateHammingDistance(const string &original, const string &rearranged) {
    int hammingDistance = 0;
    for (int i = 0; i < original.size(); ++i) {
        if (original[i] != rearranged[i]) {
            ++hammingDistance;
        }
    }
    return hammingDistance;
}
// Function to check if the string is a valid binary string
bool isBinaryString(const string &str) {
    for (char c : str) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}

// Main function to solve the problem for each test case
void solveTestCase(const string &binaryString, int A, int B) {
    // Check for invalid input
    if (!isBinaryString(binaryString)) {
        cout << "INVALID" << endl;
        return;
    }

    // Count the number of 0s and 1s in the original string
    int count0 = count(binaryString.begin(), binaryString.end(), '0');
    int count1 = binaryString.size() - count0;

    // If cost A is less than or equal to B, prioritize minimizing "01" pairs
    string rearranged;
    if (A <= B) {
        rearranged = string(count0, '0') + string(count1, '1');
    } else {
        rearranged = string(count1, '1') + string(count0, '0');
    }

    // Calculate the Hamming distance between the original and rearranged string
    int hammingDistance = calculateHammingDistance(binaryString, rearranged);
    cout <<"Answer is:"<< hammingDistance << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        string binaryString;
        int A, B;
        cin >> binaryString >> A >> B;

        solveTestCase(binaryString, A, B);
    }
    return 0;
}
