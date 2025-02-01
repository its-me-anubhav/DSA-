#include<iostream>
using namespace std;
void CountZeroOne(int arr[],int size){
  int l=0;
  int h=size-1;
  while(l<h){
    while(arr[l]==0&&l<h){
      l++;
    }
    while(arr[h]==1&&l<h){
      h--;
    }
    swap(arr[l],arr[h]);
    l++;
    h--;
   }
     for(int i=0;i<size;i++){
      cout<<arr[i];
  }
 }
int main(){
  int arr[15]={0,1,0,1,0,0,1,1,1,0,1,1,0,1,0};
   int size=15;
   CountZeroOne(arr,size);
   return 0;
}