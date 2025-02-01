#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int target){
  int s = 0;
  int e = n-1;
  while(s<=e){
     int mid = (s+e)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]>target){
       e=mid-1;
    }
    else if(arr[mid]<target){
      s=mid+1;
    }
  }
  return -1;
}
int main(){
  int arr[]={10,20,30,40,50,60,70};
  int target=50;
  int n = 7;
  int ans=binarySearch(arr,n,target);
  cout<<"Target is present at index no : "<<ans;
}
  