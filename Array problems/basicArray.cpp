#include<iostream>
using namespace std;
int main (){
  // int a=6;
  // cout<<&a<<endl;
  // int arr[34];
  // cout<<arr<<endl;
  // cout<<&arr<<endl;
  //  int arr[5]={1,2,3,4,5};
  //  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
  //   cout<<arr[i];
  //  }
   int arr[10];
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
     //  for(int i=0;i<n;i++){
    //   cout<<arr[i]*2<<" ";
    //  }
    //printing the sum of the array
    int sum=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+arr[i];
    }
    cout<<sum;

  return 0;
}