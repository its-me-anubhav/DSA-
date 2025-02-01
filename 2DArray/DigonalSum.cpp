#include<iostream>
using namespace std;
void DiagonalSum(int arr[][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
      sum =sum+arr[i][i];
    }
    cout<<sum<<endl;
}
void ReverseDiagonal(int arr[3][3],int row,int col){
     int sum=0;
     for(int i=0;i<row;i++){
          sum=sum+arr[i][col-i-1];
        }
     cout<<sum<<endl;
}
int main (){
  int arr[3][3]={
               {4,8,9},
               {5,7,3},
               {2,1,6}
            };
            int row=3;
            int col=3;
            DiagonalSum(arr,row,col);
            ReverseDiagonal(arr,row,col);
}