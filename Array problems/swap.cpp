#include<iostream>
using namespace std;
void swap(int a,int b) {
    int c=b;
    b=a;
    a=c;
    cout<<"value inside swap:a:"<<a <<" "<<"b:"<<b<<endl;
}

int main () {
    int a=3;
    int b=5;
    cout << "value before swap:a:"<<a <<" "<<"b:"<<b<<endl;
    swap(a,b);
    cout<<"value after swap :a:"<<a<<" "<<"b:" << b<<endl;

}
