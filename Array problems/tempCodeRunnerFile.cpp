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