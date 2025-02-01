#include<iostream>
using namespace std;

void print(int n){
    //Base case 
    if(n==0){
        return;
    }
    // Recursive relation 
    print(n-1);
    
    cout<<n<<" ";
}
int main (){
    int n;
    cin>>n;
    print(n);

}