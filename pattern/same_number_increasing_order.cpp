#include<iostream>
using namespace std;

int main (){

// 1
// 11
// 111
// 1111
// 11111
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}