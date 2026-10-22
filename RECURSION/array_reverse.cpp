#include<iostream>
#include<climits>
using namespace std;
void printArray(int input[],int n) {
    for(int i=0;i<5;i++) {
        cout<<input[i]<<" ";
    }
    cout << endl;
}
void reverse(int input[],int n) {
    int i=0;
    int j=n-1;
    while(i<j) {
        int temp = input[i];
        input[i] = input[j];
        input[j] =temp;
        i++;
        j--;
    }
}
int main() {
    int a =10;
    int b[10] ={1,2,3,4,5};
    reverse(b,5);
    (b,5);
}