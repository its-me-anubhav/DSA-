#include <iostream>
#include <limits.h>
using namespace std;
int FindMinimumArray(int arr[],int size){
  int MinAns=INT_MAX;
  for(int i=0;i<size;i++){
    // if(arr[i]<MinAns){
    //   MinAns=arr[i];
    // }
    MinAns=min(arr[i],MinAns);
  }
  return MinAns;
}
int main(){
  int arr[]={1,6,-8,-56,46,0};
  int size=6;
  int ans=FindMinimumArray(arr,size);
  cout<<"Minimum Number is:"<<ans;;
}