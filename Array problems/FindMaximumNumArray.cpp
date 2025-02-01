#include<iostream>
#include<limits.h>
using namespace std;
int FindMaximumNumInArray(int arr[],int size){
  int MaxAns=INT_MIN;
  for(int i=0;i<size;i++){
    //  if(arr[i]>MaxAns)
    //  MaxAns=arr[i];
     MaxAns=max(arr[i],MaxAns);
  }
  return MaxAns;
}
int main (){
  int arr[]={-1,2,5,6,79,555,64,65,44};
  int size=8;
  int ans=FindMaximumNumInArray(arr,size);
  cout<<"Maximun number is:"<<ans;
}