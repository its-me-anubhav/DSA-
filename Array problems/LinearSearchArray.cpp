// #include <iostream>
// using namespace std;
// int main(){
//   int arr[5]={10,20,30,40,50};
//   int target=10;
//   int n=5;
//   bool flag=0;
//   for(int i=0;i<n;i++){
//     if(arr[i]==target){
//       flag=1;
//       break;
//     }
//    }
//    if(flag==1){
//     cout<<"target found at index ";
//    }
//    else
//   {
//     cout<<"target not found";
//   }
//   }
#include <iostream>
using namespace std;
void PrintAraay(int arr[],int size){
 for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
 }
  cout<<endl;
}
bool Findtarget(int arr[],int size,int target){
  for(int i=0;i<size;i++){
    if(arr[i]==target){
    return true;
    }
  }
    return false;
}
int main(){
 int arr[5]={10,20,30,40,50};
 int size=5;
 PrintAraay(arr,size);
 int target=20;
 bool ans = Findtarget(arr,size,target);
 if(ans==1){
  cout<<"Target Found";
 }
  else {
    cout <<"target not found";
  }
}
