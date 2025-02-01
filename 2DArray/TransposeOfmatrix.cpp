#include<iostream>
using namespace std;
void transposeOfMatrix(int arr[][3],int row,int col){
  //here we can use both lower and upper matrix one by one but i use lower matrix
     for(int j=0;j<row;j++){
      for(int i=j;i<col;i++){
        swap(arr[i][j],arr[j][i]);
      }
     }
} 
  void printMatrix(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
  }
int main (){
  int arr[3][3]={
               {4,8,9},
               {5,7,3},
               {2,1,6}
            };
   int row=3;
    int col=3;
   cout<<"Matrix before Transpose:"<<endl;
   printMatrix(arr,row,col);
   transposeOfMatrix(arr,row,col);
   cout<<"Matrix After Transpose:"<<endl;
   printMatrix(arr,row,col);
}