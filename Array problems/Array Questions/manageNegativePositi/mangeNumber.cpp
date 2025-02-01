#include<iostream>
using namespace std;

void ShiftNegativeNoLeft(int arr[],int n){
  int j=0;
  int index=0;
  while(index<n){
    if(arr[index]<0){
      swap(arr[index],arr[j]);
      j++;
    }
    index++;
  }
  }
int main (){
  int arr[]={-8,5,-73,45,6,-78,56};
  int n=7;
  
  ShiftNegativeNoLeft(arr,n);

  for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
  }
}