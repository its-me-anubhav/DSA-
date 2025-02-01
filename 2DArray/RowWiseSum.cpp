#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3],int row,int col){
      for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
          sum = sum + arr[i][j];
        }
      cout<<sum<<endl;  
      }
}
 void columnWiseSum(int arr[][3],int row,int col){
       for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
          sum =sum + arr[j][i];
        }
        cout<<sum<<endl;
       }
 }
int main(){
    int arr[3][3]={
                {1,2,68},
                {8,9,45},
                {95,53,7}
               };
     int row=3;
     int col=3;
     cout<<"Row wise Sum is"<<endl;
     rowWiseSum(arr,row,col);
     cout<<"Column Wise Sum is :"<<endl; 
     columnWiseSum(arr,row,col);         
}