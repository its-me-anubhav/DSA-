#include<iostream>
using namespace std;

// Find the unique number in tha array 
int findUnique(int arr[], int size){
  int ans=0;
  for(int i=0;i<size;i++){
    ans=ans^arr[i];  // ^ This symbol is used for the xor operator which operated the 
    // same number 0 and different num 1
  }
   return ans;
}
int main(){  
  int arr[]={1,2,6,3,1,3,6};
  int size=7;
 int unique = findUnique(arr,size);   
 cout<<unique<<endl;
  return 0;
}