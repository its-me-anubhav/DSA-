#include<iostream>
using namespace std;
void ReverseArray(int arr[],int size){
for(int left=0,right =size-1;left<=right;left++,right--){
    swap(arr[left],arr[right]);
  }
for(int i=0;i<size;i++){
  cout<<arr[i]<<" ";
}
}
int main (){
  int arr[]={10,20,30,40,50,60,70,80,90,100};
  int size=10;
  ReverseArray(arr,size);
}