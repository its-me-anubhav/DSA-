// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    cin>>a>>b;
    string S[10]={"zero","one","two","three","four","five","six","seven","eight", "nine"};
    for(int i=a;i<=b;i++){
        if(i>9){
            if(i%2==0)
            cout<<"even"<<endl;
            else
            cout<<"odd"<<endl;
            }
            else{
                cout<<S[i]<<endl; 
        }
    }
    return 0;
}
