#include<iostream>
using namespace std;
void shiftNegativeNumberOneSide(int arr[],int n){
  
    int j=0;
    for(int index=0;index<n;index++){
       if(arr[index]<0){
        swap(arr[index],arr[j]);
        j++;
       }
    }
  }
  int main(){
  int arr[]={0,-12,60,40,-17,-7,-82};
  int n=7;

  shiftNegativeNumberOneSide(arr,n);
  cout<<"printing the array"<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}