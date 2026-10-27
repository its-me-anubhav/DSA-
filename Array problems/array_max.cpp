#include <iostream>
#include <climits>
using namespace std;
int main() {
    // Take array input from the user
    int n;
cin >> n;
int input[100];
for(int i = 0; i < n; i++) {
cin >> input[i];
}
int max = INT_MIN;
for(int i=0;i<n;i++) {
    if(input[i]>max) {
        max = input[i];  
    }
}
cout << "max is :" << max << endl;
}
