#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n<=1) {
     return n;
    } else {
     int fib = fibonacci(n - 1) + fibonacci(n - 2);
    return fib;
    }
}
void printFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
    cout << fibonacci(i) << " ";
    }
}
int main() {
    int n;
    cout << "Enter the number ";
    cin >> n;
    
    cout << "Fibonacci series of " << n << " terms: ";
    printFibonacciSeries(n);
    
    return 0;
}
