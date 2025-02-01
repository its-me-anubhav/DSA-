#include<bits/stdc++.h>
using namespace std; 

int linearSearch(int arr[],int n,int target){
    for(int i=0;i<=7;i++){
      if(arr[i]==target){
        return i;
      }
    }
    return -1;
}
int main(){
  int arr[7]={10,20,30,40,50,60,70};
  int target=70;
  int n=7;
  int result = linearSearch(arr,n,target);
  cout<<result;
  return 0;
}