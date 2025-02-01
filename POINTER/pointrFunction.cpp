#include<iostream>
using namespace std;

void solve(int* p){
p=p+1;
}
int main () {
    int arr[]={10,20,30};
    solve(arr);
    for(int i=0;i<3;i++){
    cout<<arr[i]<<endl;
    }

    return 0;

}