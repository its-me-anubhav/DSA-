#include<iostream>
using namespace std;

// Find the unique number in tha array 
int findUnique(int arr[], int size){
  int ans=0;
  for(int i=0;i<size;i++){
    ans=ans^arr[i];
  }
   return ans;
}
int main(){  
  int arr[5]={1,2,3,1,3};
 int unique = findUnique(arr,5);   
 cout<<unique<<endl;
  return 0;
}