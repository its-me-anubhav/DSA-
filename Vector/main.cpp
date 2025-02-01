#include<iostream>
using namespace std;

void fun(int arr[],int n){
  cout<<"Array elements are:"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
  }
}
int main(){

  //static method for the array creation
  // int arr[]={10,15,20,25,30,35,40};
  // int n=7;
  // fun(arr,n);
  // dynamic method for the array creation
  int n;
  cin>>n;
  int *arr= new int[n];
  for(int i=0;i<n;i++){
    int data;
    cin>>data;
    arr[i]=data;
  }
  fun(arr,n);
}