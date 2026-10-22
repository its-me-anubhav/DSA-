#include <iostream>
using namespace std;

int sumSquares(int n) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }

    return sum;
}

bool isHappy(int n) {
    while (n != 1 && n != 4) {
        n = sumSquares(n);
    }

    return n == 1;
}

int main() {
    int n;
    cin >> n;

    if (isHappy(n))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}