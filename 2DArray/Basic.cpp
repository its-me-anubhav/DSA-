#include <iostream>
#include<limits.h>
using namespace std;

 void PrintArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
 }
 void ColmWisePrint(int arr[][3],int row ,int col){
  for(int i=0;i<col;i++){
    for(int j=0;j<row;j++){
      cout<<arr[j][i]<<" ";
    }
     cout<<endl;
  }
 }

 //Search target using the linear search.
 bool findTarget(int arr[][3],int row,int col,int target){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]==target){
      return true;
      }
    }
  }
  return false;
 }

 // Find maximum number in 2D array
  int MaxNumberOfArray(int arr[][3],int row,int col){
    int maxAns=INT_MIN;
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        if(arr[i][j]>maxAns){
          maxAns=arr[i][j];
        }
      }
    }
    return maxAns;
 }
 //ffind minimum number of the 2D Array 
 int minNumberofArray(int arr[][3],int row,int col){
  int minAns=INT_MAX;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      if(arr[i][j]<minAns){
        minAns==arr[i][j];
      }
    }
  }
  return minAns;
 }
int main(){
  // creating a 2D array
  // int arr[3][3];
     
  // Taking input in the 2D Array
  int arr[3][3];
  int row =3;
  int col =3;
  int target=5;
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<"Enter the input for row index:"<<i<<" and Col index:"<<j<<endl;
      cin>>arr[i][j];
    }
  }
  cout<<"Row wise Print:"<<endl;
  PrintArray(arr,row,col);
  cout<<"Column Wise Print:"<<endl;
  ColmWisePrint(arr,row,col);
  cout<<"Target Found :"<<findTarget(arr,row,col,target)<<endl;;
  cout<<"Maximum number in 2D Array is :"<<MaxNumberOfArray(arr,row,col)<<endl;
  cout<<"Minimum number in 2D Array is :"<<minNumberofArray(arr,row,col)<<endl;
  return 0;
}