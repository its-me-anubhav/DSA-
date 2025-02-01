#include<iostream>
using namespace std;
  void CountZeroOne(int arr[],int size){
    int CountZero=0;
    int CountOne=0;
    for(int i=0;i<size;i++) {
      if(arr[i]==0){
        CountZero++;
      }
      if(arr[i]==1){
        CountOne++;
      }
     } 
     cout<<CountZero<<endl;
     cout<<CountOne<<endl;
    }
    int main(){
  int arr[15]={0,1,0,1,0,0,1,1,1,0,1,1,0,1,0};
   int size=15;
   CountZeroOne(arr,size);
   return 0;
   }